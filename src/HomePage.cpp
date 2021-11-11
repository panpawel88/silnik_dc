//
// Created by user on 01.11.2021.
//

#include <Adafruit_GFX.h>

#include "HomePage.h"
#include "colors.h"

HomePage::HomePage(Display &display, Context &context)
        : Page(display), _display(display), _tft(_display.tft()), _context(context), _headerDrawn(false),
          _infoLabel(_tft), _valueLabel(_tft), _lastDraw(0) {
    int16_t x = Margin;
    int16_t y = _display.height() / 3 + Margin;

    _infoLabel.setCursor(x, y);
    _infoLabel.setFont(display.fontManager().getFreeMono16pt7b());
    _infoLabel.setColor(BLACK);
    _infoLabel.setBackgroundColor(_display.color565(223, 223, 223));
    _infoLabel.setForegroundColor(_display.color565(223, 223, 223));
    _infoLabel.setText(F("STAN WYSUNIECIA:"));

    _valueLabel.setCursor(0, 0);
    _valueLabel.setFont(display.fontManager().getFreeMono30pt7b());
    _valueLabel.setText(F("0%"));

    _tft.setFont(display.fontManager().getFreeMono30pt7b());
    int16_t vx, vy;
    uint16_t vw, vh;
    _valueLabel.getBounds(vx, vy, vw, vh);
    x = Margin;
    y = _display.height() / 2 + vh;
    _valueLabel.setCursor(x, y);

    _valueLabel.setColor(BLACK);
    _valueLabel.setBackgroundColor(_display.color565(223, 223, 223));
    _valueLabel.setForegroundColor(_display.color565(223, 223, 223));
}

HomePage::~HomePage() = default;

void HomePage::draw() {
    if (!_headerDrawn) {
        drawHeader(F("SILNIK DC"));
        _infoLabel.draw();
        _valueLabel.draw();
        _headerDrawn = true;
    }

    long value = getPotentiometerValue();
    if (_lastValue != value) {
        _valueLabel.setText(String(value) + String("%"));
        _valueLabel.draw();
        _lastDraw = millis();
        _lastValue = value;
    }
}

bool HomePage::isDirty() const {
    return millis() - _lastDraw >= 200 && _lastValue != getPotentiometerValue();
}

long HomePage::getPotentiometerValue() const {
    long value = _context.potentiometer().value();
    value = map(value, 0, 1024, 0, 100);
    return value;
}
