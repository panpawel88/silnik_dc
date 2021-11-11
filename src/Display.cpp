//
// Created by user on 01.11.2021.
//

#include <Adafruit_GFX.h>

#include "Display.h"
#include "colors.h"

#define _sclk 13
#define _miso 12
#define _mosi 11
#define _cs 10
#define _dc 9
#define _rst 8


Display::Display(FontManager& manager)
        : _fontManager(manager), _width(320), _height(240), _tft(_cs, _dc, _rst) {
}

void Display::setup() {
    _tft.begin();
    _tft.setRotation(1);
    _tft.fillScreen(WHITE);
}

