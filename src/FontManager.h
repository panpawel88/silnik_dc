//
// Created by user on 01.11.2021.
//

#ifndef PIEC_FONTMANAGER_H
#define PIEC_FONTMANAGER_H

#include <Adafruit_GFX.h>


class FontManager {
public:
    const GFXfont* getFreeMono30pt7b();
    const GFXfont* getFreeMono16pt7b();
};


#endif //PIEC_FONTMANAGER_H
