//
// Created by user on 08.11.2021.
//

#include "DcMotor.h"

DcMotor::DcMotor(uint8_t enablePin, uint8_t in1Pin, uint8_t in2Pin) : _enablePin(enablePin), _in1Pin(in1Pin),
                                                                      _in2Pin(in2Pin) {

}

void DcMotor::setup() {
    pinMode(_enablePin, OUTPUT);
    pinMode(_in1Pin, OUTPUT);
    pinMode(_in2Pin, OUTPUT);
}

void DcMotor::forward(long value) {
    digitalWrite(_in1Pin, HIGH);
    digitalWrite(_in2Pin, LOW);
    analogWrite(_enablePin, value);
}

void DcMotor::reverse(long value) {
    digitalWrite(_in1Pin, LOW);
    digitalWrite(_in2Pin, HIGH);
    analogWrite(_enablePin, value);
}

void DcMotor::stop() {
    digitalWrite(_in1Pin, LOW);
    digitalWrite(_in2Pin, LOW);
}


