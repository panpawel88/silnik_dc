//
// Created by user on 08.11.2021.
//

#ifndef SILNIK_DC_POTENTIOMETER_H
#define SILNIK_DC_POTENTIOMETER_H

#include <Arduino.h>

class Potentiometer {
public:
    explicit Potentiometer(uint8_t pin);

    void update();

    long value() const { return _value; }

private:
    uint8_t _pin;
    long _value;
};


#endif //SILNIK_DC_POTENTIOMETER_H
