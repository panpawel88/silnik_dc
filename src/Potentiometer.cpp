//
// Created by user on 08.11.2021.
//

#include "Potentiometer.h"

Potentiometer::Potentiometer(uint8_t pin) : _pin(pin), _value(0){

}

void Potentiometer::update() {
    _value = analogRead(_pin);
}
