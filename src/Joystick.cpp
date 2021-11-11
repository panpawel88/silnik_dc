//
// Created by user on 08.11.2021.
//

#include "Joystick.h"

Joystick::Joystick(uint8_t pin) : _pin(pin), _value(0), _direction(NONE) {
}

void Joystick::update() {
    long value = analogRead(_pin);
    if (value >= 530) {
        _value = map(value, 530, 1023, 0, 255);
        _direction = FORWARD;
    } else if (value <= 490) {
        _value = map(value, 490, 0, 0, 255);
        _direction = REVERSE;
    } else {
        _value = 0;
        _direction = NONE;
    }
}


