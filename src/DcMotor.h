//
// Created by user on 08.11.2021.
//

#ifndef SILNIK_DC_DCMOTOR_H
#define SILNIK_DC_DCMOTOR_H

#include <Arduino.h>

class DcMotor {
public:
    explicit DcMotor(uint8_t enablePin, uint8_t in1Pin, uint8_t in2Pin);

    void setup();

    void forward(long value);
    void reverse(long value);
    void stop();

private:
    uint8_t _enablePin;
    uint8_t _in1Pin;
    uint8_t _in2Pin;
};


#endif //SILNIK_DC_DCMOTOR_H
