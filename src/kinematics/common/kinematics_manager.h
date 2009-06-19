//// ------------------------------------------------------------------------
// Proces:		EDP
// Plik:			kinematics_manager.cc
// System:	QNX/MRROC++  v. 6.3
// Opis:		Klasa zarzadzajaca modelami kinematyki. 
//				- deklaracja klasy
//				- wspolna dla wszystkich robotow
//
// Autor:		tkornuta
// Data:		17.01.2007
// ------------------------------------------------------------------------

#ifndef __EDP_KIN_MAN_H
#define __EDP_KIN_MAN_H

#include <map>

#include "kinematics/common/kinematic_model.h"

namespace mrrocpp {
namespace kinematic {
namespace common {

class manager{
  protected:
    // Lista kinematyk.
      std::map <short, model*> kinematic_models_list;
    // Number obecnie wybranego modelu kinematyki.
    int current_kinematic_model_no;
    // Obecnie wybrany model kinematyki.
    model* current_kinematic_model;

    // Tworzy liste modeli kinematyki - metoda abstrakcyjna, implementowana w klasie ROBOT (!).
    virtual void create_kinematic_models_for_given_robot(void) = 0;

  public:
    // Konstruktor - tworzy liste kinematyk.
    manager(void);
    // Destruktor - niszczy liste kinematyk.
    virtual ~manager(void);

	// Dodaje nowy model na koniec listy.
	void add_kinematic_model (model* _model);

    // Ustawia model kinematyki.
    void set_kinematic_model (int);
    // Zwraca obecny model kinematyki.
    model* get_current_kinematic_model (void);


    // Zwraca number obecnie wybranego modelu kinematyki.
    int get_current_kinematic_model_no(void);

};// manager

} // namespace common
} // namespace kinematic
} // namespace mrrocpp

#endif
