#include <Arduino.h>

#include "Display.h"
#include "HomePage.h"
#include "Potentiometer.h"
#include "Joystick.h"
#include "DcMotor.h"
#include "Context.h"

Potentiometer potentiometer(A1);
Joystick joystick(A0);
DcMotor dcMotor(3, 4, 5);
Context context(dcMotor, potentiometer, joystick);

FontManager fontManager;
Display display(fontManager);
HomePage page(display, context);

void setup()
{
    dcMotor.setup();
    display.setup();
    page.draw();
}

void loop()
{
    joystick.update();
    potentiometer.update();

    if (joystick.direction() == Joystick::FORWARD) {
        dcMotor.forward(joystick.value());
    } else if (joystick.direction() == Joystick::REVERSE) {
        dcMotor.reverse(joystick.value());
    } else {
        dcMotor.stop();
    }

    if (page.isDirty()) {
        page.draw();
    }
}