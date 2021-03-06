/**
 * @file neuron_sensor.cc
 * @brief Source file for neuron_sensor class.
 * @author Tomasz Bem (mebmot@wp.pl)
 * @ingroup neuron
 * @date 23.06.2010
 */

#include <ctime>
#include <cstdio>

#include <sys/socket.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <netinet/in.h>

#include "base/lib/typedefs.h"
#include "base/lib/impconst.h"
#include "base/lib/com_buf.h"

#include "neuron_sensor.h"

namespace mrrocpp {
namespace ecp_mp {
namespace sensor {

/**
 * @brief Message sent to VSP when MRROC++ it is ready to work.
 * @details Message is sent from MRROC++ when start button in task panel is
 * pressed. So MRROC++ is already working, but waiting for start button in VSP
 * main control.
 */
#define MRROCPP_READY			0x01

/**
 * @brief Message sent to VSP when MRROC++ has finished work or connection.
 * @details Message is sent from MRROC++ when stop button in task panel is
 * pressed or somehow the connection with MRROC++ was lost or ended from the
 * MRROC++ side. In any case, the VSP stops its work and waits for another
 * connection.
 */
#define MRROCPP_FINISHED		0x02

/**
 * @brief Message sent from VSP to MRROC++ when the entire system should start.
 * @details Message is generated after pressing the start button in VSP main
 * control panel, therefore allowing MRROC++ to execute generators. It will be
 * working until stop button is pressed in VSP main control panel.
 */
#define VSP_START				0x11

/**
 * @brief Message sent from VSP to MRROC++ when entire system should stop.
 * @details Message is generated after pressing the stop button in VSP main
 * control panel. It stops trajectory generation in MRROC++.
 */
#define VSP_STOP				0x12

/**
 * @brief Message for requesting and sending first coordinates of the trajectory.
 * @details Message is initiated by the MRROC++, when it needs first coordinates
 * of a trajectory to engage smooth generator to position robot at the begining
 * of a trajectory. When VSP recieves the message, it appends coordinates and
 * return message to MRROC++ with the same signal. After which, MRROC++ starts
 * smooth generator and moves to start position.
 */
#define FIRST_COORDINATES		0x21

/**
 * @brief Message for requesting and sending first coordinates for naural generator.
 * @details Message is initiated by the MRROC++ when the first step of the
 * neural generator is called. It allows to properly start generator and
 * calculate values in next steps. VSP receives the message and appends
 * appropriate coordinates to it and with the same signal return it to MRROC++.
 */
#define TRAJECTORY_FIRST		0x22

/**
 * @brief Message to VSP containing current position of a robot.
 * @details Message is created by MRROC++ at the end of the fifth macro step
 * with information about exact coordinates of a manipulator. VSP receives it
 * and use it to calculate next position to which manipulator should be moved.
 */
#define CURRENT_POSITION		0x23

/**
 * @brief Message from VSP containing next position for a robot.
 * @details Message is created by VSP as a response for CURRENT_TRAJECTORY
 * signal. It contains calculated next position according to the current
 * position.
 */
#define TR_NEXT_POSITION		0x24

/**
 * @brief Message from VSP to MRROC++ with information to start breaking.
 * @details Message is created by VSP as a response for CURRENT_TRAJECTORY
 * signal. It contains the last position of a trajectory. Message is generated
 * when current position is on a border or inside circle around the final
 * position. After this signal MRROC++ starts breaking, after which execution
 * of a next trajectory occurs.
 */
#define START_BREAKING			0x25

/**
 *
 */
//TODO: dopisac komentarz
#define FINAL_POSITION			0x26

/*==================================Constructor===========================*//**
 * @brief Constructor, creates and initalizes a communication with VSP.
 * @param _configurator MRROC++ configurator.
 */
neuron_sensor::neuron_sensor(mrrocpp::lib::configurator& _configurator):config(_configurator) {

	base_period=5;
	current_period=1;

	uint16_t vsp_port = config.value<uint16_t>("vsp_port", "[VSP]");
	const std::string vsp_node_name = config.value<std::string>("vsp_node_name", "[VSP]");

	printf("%d %s\n", vsp_port, vsp_node_name.c_str());

	//Try to open socket.
	socketDescriptor=socket(AF_INET, SOCK_STREAM, 0);
	if(socketDescriptor==-1)
		throw std::runtime_error("socket(): "+std::string(strerror(errno)));

	//Set socket options.
	int flag=1;
	if(setsockopt(socketDescriptor,IPPROTO_TCP,TCP_NODELAY,(char*) &flag, sizeof(int))==-1)
		throw std::runtime_error("setsockopt(): "+std::string(strerror(errno)));

	//Get server hostname.
	hostent* server=gethostbyname(vsp_node_name.c_str());
	if(server==NULL)
		throw std::runtime_error("gethostbyname("+vsp_node_name+"): "+std::string(hstrerror(h_errno)));

	//Data with addres of connection.
	sockaddr_in serv_addr;
	memset(&serv_addr, 0, sizeof(serv_addr));

	//Fill it with data.
	serv_addr.sin_family=AF_INET;
	memcpy(&serv_addr.sin_addr.s_addr, server->h_addr,server->h_length);
	serv_addr.sin_port=htons(vsp_port);

	//Try to estabilish a connection with neuron VSP.
	if(connect(socketDescriptor, (const struct sockaddr*) &serv_addr, sizeof(serv_addr))==-1)
		throw std::runtime_error("connect(): "+std::string(strerror(errno)));

	printf("Neuron sensor created\n");
}

/*==================================Destructor============================*//**
 * @brief Destructor.
 */
neuron_sensor::~neuron_sensor() {
	close(socketDescriptor);
}

/*=================================get_reading============================*//**
 * @brief Method invoked to read data from socket.
 * @details Method is invoked either by explicit call of a method or when
 * the current period from neuron sensor interface reaches 1. It gets data
 * from VSP and stores command and if needed new coordinates.
 */
void neuron_sensor::get_reading(){
	char buff[49];

	//Read packet from socket*/
	int result = read(socketDescriptor, buff, sizeof(buff));
	if (result < 0) {
		throw std::runtime_error(std::string("read() failed: ") + strerror(errno));
	}

	//copy data from packet to variables
	memcpy(&command,buff,1);
	printf("command: %x\n",command);
	switch(command){
		case VSP_START:
			printf("VSP start command received\n");
			break;
		case VSP_STOP:
			printf("VSP end command received\n");
			break;

		case FIRST_COORDINATES:
		case TRAJECTORY_FIRST:
		case TR_NEXT_POSITION:
			memcpy(&(coordinates.x),buff+1,8);
			memcpy(&(coordinates.y),buff+9,8);
			memcpy(&(coordinates.z),buff+17,8);
			break;
		case START_BREAKING:
			memcpy(&(coordinates.x),buff+1,8);
			memcpy(&(coordinates.y),buff+9,8);
			memcpy(&(coordinates.z),buff+17,8);
			memcpy(&(lastButOne.x),buff+25,8);
			memcpy(&(lastButOne.y),buff+33,8);
			memcpy(&(lastButOne.z),buff+41,8);
			printf("%lf %lf %lf\n",coordinates.x,coordinates.y,coordinates.z);
			printf("%lf %lf %lf\n",lastButOne.x,lastButOne.y,lastButOne.z);
			break;

		default:
			printf("unknown command %d\n",command);
	}
}

/*===============================stop=====================================*//**
 * @brief Checks whether transmitting trajectory was finished.
 * @details When stop button in VSP is pressed, which means that execution
 * of trajectory should be stopped this message is generated to stop execution
 * and wait for pressing start button in VSP once more.
 * @return True if transmission if finished, false otherwise.
 */
bool neuron_sensor::stop(){
	if(command==VSP_STOP)
		return true;
	return false;
}

/*================================startBreaking===========================*//**
 * @brief Check whether information to start breaking was sent from VSP
 * @details When current position is inside a circle defined in VSP, then
 * manipulator should enter into breaking phase to eventually stop.
 * @return True if START_BREAKING command was sent from VSP.
 */
bool neuron_sensor::startBraking(){
	if(command==START_BREAKING)
		return true;
	return false;
}

/*===============================getCoordinates===========================*//**
 * @brief Returns latest coordinates received from VSP.
 * @return Latest coordinates received from VSP.
 */
Coordinates neuron_sensor::getCoordinates(){
	return coordinates;
}

/*===============================getLastButOne============================*//**
 * @brief Returns last but one coordinates received from VSP.
 * @return Last but one coordinates received from VSP.
 */
Coordinates neuron_sensor::getLastButOne(){
	return lastButOne;
}

/*=================================getCommand=============================*//**
 * @brief Returns latest command received from VSP.
 * @return Latest command received from VSP.
 */
uint8_t neuron_sensor::getCommand(){
	return command;
}

/*================================sendCommand=============================*//**
 * @brief Sends command to VSP.
 * @details Commands that are recognized by VSP are:
 *		- MRROCPP_READY,
 *		- MRROCPP_FINISHED,
 *		- FIRST_COORDINATES,
 *		- TRAJECTORY_FIRST,
 * But any value can be sent, there is no formal restriction, but only
 * mentioned are recognized and are processed.
 *
 * @param command One of the above command.
 */
void neuron_sensor::sendCommand(uint8_t command){
	printf("neuron_sensor->sendCommand simple command nr : %d\n",command);
	int result = write(socketDescriptor, &command, sizeof(uint8_t));

	if (result < 0) {
		throw std::runtime_error(std::string("write() failed: ") + strerror(errno));
	}

	if (result != sizeof(uint8_t)) {
		throw std::runtime_error("write() failed: result != sizeof(uint8_t)");
	}
}

//TODO: dodac komentarz
void neuron_sensor::sendCurrentPosition(double x, double y, double z){
	printf("current position %d\n",CURRENT_POSITION);
	sendCoordinates(CURRENT_POSITION,x,y,z);
}

void neuron_sensor::sendFinalPosition(double x, double y, double z){
	sendCoordinates(FINAL_POSITION,x,y,z);
}

/*==============================sendCoordinates===========================*//**
 * @brief Sends coordinates to VSP.
 * @details Sends CURRENT_POSITION command along with coordinates to VSP.
 * @param x X coordinate.
 * @param y Y coordinate.
 * @param z Z coordinate.
 */
void neuron_sensor::sendCoordinates(uint8_t _command, double x, double y, double z){
	char buff[25];
	uint8_t temp_command=_command;
	memcpy(buff,&temp_command,1);
	memcpy(buff+1,&x,8);
	memcpy(buff+9,&y,8);
	memcpy(buff+17,&z,8);

	printf("neuron_sensor->sendCoordinates command : %d x:%lf y:%lf z:%lf\n",temp_command,x,y,z);

	int result=write(socketDescriptor,buff,sizeof(buff));

	if (result < 0) {
		throw std::runtime_error(std::string("write() failed: ") + strerror(errno));
	}

	if (result != sizeof(buff)) {
		throw std::runtime_error("write() failed: result != sizeof(buff)");
	}
}

/*===========================getFirstCoordinates==========================*//**
 * @brief Provides first coordinates of currently processed trajectory.
 * @details Sends FIRST_COORDINATES command and waits for VPS response, after
 * which returns coordinates that came from VSP.
 * @return First coordinates of current trajectory.
 */
Coordinates neuron_sensor::getFirstCoordinates(){
	sendCommand(FIRST_COORDINATES);
	get_reading();
	return coordinates;
}

/*===========================startGettingTrajectory=======================*//**
 * @brief Used in first step to initialize sending trajectory from VSP.
 * @details Sends TRAJECTORY_FIRST to VSP and sets appropriate value for
 * current_period.
 */
void neuron_sensor::startGettingTrajectory(){
	current_period=1;
	sendCommand(TRAJECTORY_FIRST);
}

/*===============================waitForVSPStart==========================*//**
 * @brief When invoked sends MRROCPP_READY and wait for VSP_START response.
 * @details Receives commands in loop until proper command VSP_START is
 * received.
 */
void neuron_sensor::waitForVSPStart(){
	sendCommand(MRROCPP_READY);
	do{
		get_reading();
	}while(command!=VSP_START);
}

/*============================sendCommunicationFinished===================*//**
 * @brief Sends MRROCPP_FINISHED to VSP.
 * @details Command is sent when communication link in not needed anymore.
 */
void neuron_sensor::sendCommunicationFinished(){
	sendCommand(MRROCPP_FINISHED);
}

/*================================configure_sensor========================*//**
 * @brief Unused method from sensor interface.
 */
void neuron_sensor::configure_sensor(){
}

/*================================initiate_reading========================*//**
 * @brief Unused method from sensor interface.
 */
void neuron_sensor::initiate_reading(){
}


} //sensor
} //ecp_mp
} //mrrocpp
