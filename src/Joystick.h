//
// Created by user on 08.11.2021.
//

#ifndef SILNIK_DC_JOYSTICK_H
#define SILNIK_DC_JOYSTICK_H

#include <Arduino.h>


class Joystick {
public:
    explicit Joystick(uint8_t pin);

    void update();

    enum Direction {
        NONE,
        FORWARD,
        REVERSE,
    };

    long value() const { return _value; }
    Direction direction() const { return _direction; }

private:
    uint8_t _pin;
    long _value;
    Direction _direction;
};


#endif //SILNIK_DC_JOYSTICK_H
