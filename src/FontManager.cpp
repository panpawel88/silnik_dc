//
// Created by user on 01.11.2021.
//

#include "FontManager.h"

#include "FreeMono30pt7b.h"
#include "FreeMono16pt7b.h"


const GFXfont * FontManager::getFreeMono30pt7b() {
    return &FreeMono30pt7b;
}

const GFXfont *FontManager::getFreeMono16pt7b() {
    return &FreeMono16pt7b;
}
