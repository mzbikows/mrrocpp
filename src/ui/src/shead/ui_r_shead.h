// -------------------------------------------------------------------------
//                            ui_class.h
// Definicje klasy Ui
//
// Ostatnia modyfikacja: 2010
// -------------------------------------------------------------------------

#ifndef __UI_R_SHEAD_H
#define __UI_R_SHEAD_H

#include "ui/src/ui.h"
#include "ui/src/ui_robot.h"

namespace mrrocpp {
namespace ui {
namespace common {
class Interface;
}
namespace tfg_and_conv {
class EcpRobot;
}

namespace shead {

//
//
// KLASA UiRobot
//
//


class UiRobot : public common::UiRobot
{
private:

public:

	tfg_and_conv::EcpRobot *ui_ecp_robot;
	void close_all_windows();
	UiRobot(common::Interface& _interface);
	int reload_configuration();
	int manage_interface();
	void delete_ui_ecp_robot();
	int synchronise();
	int edp_create();
	int edp_create_int();
};

}
} //namespace ui
} //namespace mrrocpp

#endif

