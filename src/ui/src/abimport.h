/* Import (extern) header for application - AppBuilder 2.03  */

#if defined(__cplusplus)
extern "C" {
#endif

#include "abdefine.h"

extern ApEventLink_t AbInternalLinks[];

extern ApWindowLink_t task_config_window;
extern ApWindowLink_t yes_no_window;
extern ApWindowLink_t teaching_window;
extern ApWindowLink_t wnd_irp6_postument_xyz_euler_zyz;
extern ApWindowLink_t wndForceControl;
extern ApWindowLink_t wnd_help_about;
extern ApWindowLink_t wnd_input_integer;
extern ApWindowLink_t wnd_input_double;
extern ApWindowLink_t wnd_message;
extern ApWindowLink_t wnd_choose_option;
extern ApWindowLink_t wnd_irp6_postument_xyz_angle_axis;
extern ApWindowLink_t base;
extern ApWindowLink_t wnd_speaker_play;
extern ApWindowLink_t wnd_irp6_on_track_xyz_euler_zyz;
extern ApWindowLink_t wnd_irp6_postument_xyz_angle_axis_ts;
extern ApWindowLink_t wnd_irp6_on_track_xyz_angle_axis_ts;
extern ApWindowLink_t wnd_irp6_postument_xyz_euler_zyz_ts;
extern ApWindowLink_t wnd_irp6_on_track_xyz_euler_zyz_ts;
extern ApWindowLink_t MAM_wnd_manual_moves_automatic_measures;
extern ApWindowLink_t wndTrajectoryReproduce;
extern ApWindowLink_t wnd_irp6_postument_inc;
extern ApWindowLink_t wnd_irp6_on_track_kinematic;
extern ApWindowLink_t wnd_irp6_postument_kinematic;
extern ApWindowLink_t wnd_irp6_on_track_servo_algorithm;
extern ApWindowLink_t wnd_irp6_postument_servo_algorithm;
extern ApWindowLink_t wnd_irp6_on_track_inc;
extern ApWindowLink_t wnd_irp6_on_track_xyz_angle_axis;
extern ApWindowLink_t wnd_irp6_on_track_int;
extern ApWindowLink_t wnd_conveyor_servo_algorithm;
extern ApWindowLink_t wnd_conveyor_moves;
extern ApWindowLink_t wnd_processes_control;
extern ApWindowLink_t wnd_irp6_mechatronika_inc;
extern ApWindowLink_t wnd_irp6_postument_int;
extern ApWindowLink_t wnd_irp6_mechatronika_int;
extern ApWindowLink_t wnd_irp6_mechatronika_kinematic;
extern ApWindowLink_t wnd_irp6_mechatronika_servo_algorithm;
extern ApWindowLink_t wnd_irp6_mechatronika_xyz_angle_axis;
extern ApWindowLink_t wnd_irp6_mechatronika_xyz_angle_axis_ts;
extern ApWindowLink_t wnd_irp6_mechatronika_xyz_euler_zyz;
extern ApWindowLink_t wnd_irp6_mechatronika_xyz_euler_zyz_ts;
extern ApWindowLink_t wndFileLocation;
extern ApWindowLink_t file_selection_window;
extern ApWidget_t AbWidgets[ 917 ];

extern ApMenuLink_t file_menu;
extern ApMenuLink_t task_menu;
extern ApMenuLink_t help_menu;
extern ApMenuLink_t special_menu;
extern ApMenuLink_t all_robots_menu;
extern ApMenuLink_t robot_menu;

#if defined(__cplusplus)
}
#endif


#ifdef __cplusplus
int irp6ot_inc_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6_on_track_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_int_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_xyz_euler_zyz_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MPup( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int OnTimer( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_process_control_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_start_mp( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int signal_mp( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_stop_mp( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_pause_mp( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_resume_mp( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int yes_no_callback( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_teaching_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int teaching_window_end_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int teaching_window_send_move( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_ecp_irp6_on_track( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int quit( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int process_control_window_init( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6ot_start( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6ot_stop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_process_control_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MPslay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_process_control_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_task_config_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int manage_configuration_file( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_ecp_all_robots( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_task_config_window_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6ot_xyz_euler_zyz_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6_on_track_inc_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6_on_track_int_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_teaching_window_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnAddMacrostep( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnNewTrajectory( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCTimerTick( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCwndForceControlRealised( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FLbtnAcceptFile( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnStart( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnPause( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnStop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnExit( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRConnect( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnExit( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnSaveAll( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnPositionZero( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnLoadTrajectory( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnSaveTrajectory( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnChangeExternalMotorControl( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove0Left( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove1Left( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove2Left( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove3Left( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove4Left( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove5Left( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove0Right( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove1Right( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove2Right( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove3Right( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove4Right( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnMove5Right( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnDSSCalibrate( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnFSCalibrate( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int TRbtnTryAgain( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int file_selection_window_post_realize( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_file_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_file_selection_window_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int file_selection_window_send_location( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_inc_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_inc_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_int_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_xyz_euler_zyz_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_int_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6p_start( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6p_stop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FLbtnExit( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnOnOffReader( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int FCbtnCalibrateSensor( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wind_conveyor_moves_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wind_conveyor_moves_init( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wind_conveyor_moves_move( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int input_integer_callback( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int input_double_callback( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int choose_option_callback( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_conv_start( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_conv_stop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6ot_xyz_angle_axis_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_xyz_angle_axis_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_xyz_angle_axis( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_xyz_angle_axis( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_xyz_euler_zyz_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_xyz_angle_axis_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_xyz_angle_axis_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_ecp_irp6_postument( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_ecp_conveyor( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_speaker_start( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_speaker_stop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_ecp_speaker( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_speaker_play( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wind_speaker_play_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int speaker_play_exec( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int speaker_check_state( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_all_robots_slay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int all_robots_move_to_preset_position( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_trigger_mp( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_console( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int slay_all( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_all_robots_create( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_all_robots_synchronise( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int activate_file_menu( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int activate_all_robots_menu( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int activate_task_menu( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int activate_special_menu( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int activate_help_menu( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_xyz_angle_axis_set_tool( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_xyz_aa_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_xyz_angle_axis_ts_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_xyz_angle_axis_set_tool( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_xyz_angle_axis_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6ot_xyz_angle_axis_ts_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_xyz_euler_zyz_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6ot_xyz_euler_zyz_ts_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_xyz_euler_zyz_set_tool( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_xyz_euler_zyz_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_xyz_euler_zyz_ts_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_xyz_euler_zyz_set_tool( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_btn_start_measures( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_btn_stop_measures( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_btn_clear_measures( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_btn_save_measures( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_btn_exit( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_tmr_connect( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int MAM_btn_calibrate( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6_on_track_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6_on_track_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6_on_track_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6_on_track_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6_on_track_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6_postument_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6_postument_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6_postument_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6_postument_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6_postument_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6_postument_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_kinematic( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_kinematic_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_kinematic( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6ot_kinematic_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_kinematic_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_kinematic_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_on_track_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6ot_servo_algorithm_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_conveyor_servo_algorithm_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6_postument_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6p_servo_algorithm_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_conveyor_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int conv_servo_algorithm_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_servo_algorithm_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_servo_algorithm_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_joints_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_seralg_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_xyz_aa_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_xyz_aa_ts_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_xyz_zyz_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_xyz_zyz_ts_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_motors_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_joints_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_ser_alg_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_xyz_aa_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_xyz_aa_ts_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_xyz_zyz_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6p_xyz_zyz_ts_copy_cur_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6ot_motors_copy_current_to_desired( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_speaker_trigger( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_conv_trigger( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6p_trigger( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6ot_trigger( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_all_robots_trigger( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_teaching_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_yes_no_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_input_integer_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_input_double_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_choose_option_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_file_selection_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_on_track_create( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_on_track_slay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_on_track_synchronise( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_kinematic( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_xyz_angle_axis_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_xyz_euler_zyz_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_xyz_angle_axis( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_on_track_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6ot_move_to_preset_position( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int activate_robot_menu( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_postument_create( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_postument_slay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_postument_synchronise( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_xyz_angle_axis( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6p_move_to_preset_position( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_xyz_eul_zyz_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_xyz_aa_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_kinematic( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6_postument_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_conveyor_create( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_conveyor_slay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wind_conveyor_moves( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int conveyor_move_to_preset_position( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_conveyor_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_speaker_create( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_speaker_slay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wind_speaker_play( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int speaker_preset_sound_play( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_mechatronika_create( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_mechatronika_slay( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_irp6_mechatronika_synchronise( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_move_to_preset_position( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_xyz_euler_zyz_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_xyz_angle_axis_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_kinematic( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_all_robots_stop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_all_robots_start( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6m_start( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6m_stop( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_reader_irp6m_trigger( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int pulse_ecp_irp6_mechatronika( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_motors_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_inc_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6m_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6m_inc( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_joints_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_int_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6m_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6m_int( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_kinematic( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_kinematic_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_ser_alg_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_servo_algorithm( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_servo_algorithm_set( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_xyz_aa_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_xyz_angle_axis_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_xyz_angle_axis( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_xyz_aa_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_xyz_angle_axis_set_tool( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_xyz_aa_ts_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_xyz_zyz_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_xyz_euler_zyz_motion( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int import_wnd_irp6m_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int export_wnd_irp6m_xyz_euler_zyz( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int wnd_irp6m_xyz_zyz_ts_copy_cur_to_des( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int init_wnd_irp6m_xyz_euler_zyz_ts( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int irp6m_xyz_euler_zyz_set_tool( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_inc_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_int_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_kinematic_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_servo_algorithm_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_xyz_angle_axis_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_xyz_aa_ts_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_xyz_euler_zyz_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int clear_wnd_irp6m_xyz_euler_zyz_ts_flag( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int start_wnd_irp6m_xyz_angle_axis( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int EDP_conveyor_synchronise( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int unload_all( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int close_task_config_window( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
#endif
