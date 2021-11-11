//
// Created by user on 05.11.2021.
//

#include "Page.h"
#include "colors.h"

void Page::drawHeader(const String &header) {
    TFT &tft = _display.tft();
    tft.setFont(_display.fontManager().getFreeMono16pt7b());
    int16_t x, y;
    uint16_t w, h;
    tft.getTextBounds(header, Margin, 0, &x, &y, &w, &h);
    tft.fillScreen(_display.color565(223, 223, 223));
    tft.fillRect(0, 0, _display.width(), 3 * Margin + h, _display.color565(0, 255, 0));
    tft.setCursor(Margin, Margin + h);

    tft.setTextColor(WHITE);
    tft.print(header);
}
