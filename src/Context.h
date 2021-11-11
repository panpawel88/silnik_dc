//
// Created by user on 08.11.2021.
//

#ifndef SILNIK_DC_CONTEXT_H
#define SILNIK_DC_CONTEXT_H


#include "Joystick.h"
#include "DcMotor.h"
#include "Potentiometer.h"

class Context {
public:
    Context(DcMotor &dcMotor, Potentiometer &potentiometer, Joystick &joystick);

    DcMotor &dcMotor() { return _dcMotor; }

    Potentiometer &potentiometer() { return _potentiometer; }

    Joystick &joystick() { return _joystick; }

private:
    DcMotor &_dcMotor;
    Potentiometer &_potentiometer;
    Joystick &_joystick;
};


#endif //SILNIK_DC_CONTEXT_H
