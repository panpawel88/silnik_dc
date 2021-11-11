//
// Created by user on 08.11.2021.
//

#include "Context.h"


Context::Context(DcMotor &dcMotor, Potentiometer &potentiometer, Joystick &joystick) : _dcMotor(dcMotor),
                                                                                       _potentiometer(potentiometer),
                                                                                       _joystick(joystick) {

}
