//
// Created by user on 01.11.2021.
//

#ifndef STEPPER_DEMO_DISPLAY_H
#define STEPPER_DEMO_DISPLAY_H

#include <Adafruit_ILI9340.h>
#include "FontManager.h"

typedef Adafruit_ILI9340 TFT;

class Display {
public:
    explicit Display(FontManager& fontManager);
    void setup();

    uint16_t width() const { return _width; }
    uint16_t height() const { return _height; }

    TFT& tft() { return _tft; }
    FontManager& fontManager() { return _fontManager; }

    uint16_t color565(uint8_t r, uint8_t g, uint8_t b) { return ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3); }

private:
    TFT _tft;
    FontManager& _fontManager;

    uint16_t _width;
    uint16_t _height;
};


#endif //STEPPER_DEMO_DISPLAY_H
