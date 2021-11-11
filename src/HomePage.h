//
// Created by user on 01.11.2021.
//

#ifndef STEPPER_DEMO_HOMEPAGE_H
#define STEPPER_DEMO_HOMEPAGE_H

#include <Arduino.h>

#include "Constants.h"
#include "Page.h"
#include "Label.h"
#include "Context.h"


class HomePage : public Page {
public:

    HomePage(Display& display, Context& context);

    ~HomePage() override;

    void draw() override;

    bool isDirty() const override;

private:
    long getPotentiometerValue() const;

    Display& _display;
    TFT& _tft;
    Context& _context;
    bool _headerDrawn;
    Label _infoLabel;
    Label _valueLabel;
    unsigned long _lastDraw;
    int _lastValue;
};


#endif //STEPPER_DEMO_HOMEPAGE_H
