#include "nokia5110.classic.display.h"

Tama::Nokia5110ClassicDisplay::Nokia5110ClassicDisplay(Tama::ClassicDisplay::Mode m) : Tama::ClassicDisplay(m) {
  display = new Adafruit_PCD8544(13, 12, 11, 10, 9);
  display->begin();
  display->setContrast(60);
}

Tama::Nokia5110ClassicDisplay::~Nokia5110ClassicDisplay() {
  delete display;
}

void Tama::Nokia5110ClassicDisplay::displayPrintingStrategy() {
  display->display();
}


void Tama::Nokia5110ClassicDisplay::pixelDrawingStrategy(int x, int y, Tama::ClassicDisplay::PixelColor pc) {
  display->drawPixel(x, y, pc);
}

void Tama::Nokia5110ClassicDisplay::clear() {
  display->clearDisplay();
  display->drawLine(24, 9, 60, 9, BLACK); //top
  display->drawLine(24, 9, 24, 11, BLACK); //top left corner 1
  display->drawLine(22, 11, 24, 11, BLACK);//top left corner 2
  display->drawLine(22, 11, 22, 36, BLACK); // left
  display->drawLine(22, 36, 24, 36, BLACK); //bot left corner 1
  display->drawLine(24, 36, 24, 38, BLACK); //bot left corner 2
  display->drawLine(24, 38, 60, 38, BLACK); // bot
  display->drawLine(60, 38, 60, 36, BLACK); // bot right corner 1
  display->drawLine(60, 36, 62, 36, BLACK); // bot right corner 2
  display->drawLine(62, 36, 62, 11, BLACK); // right
  display->drawLine(60, 11, 62, 11, BLACK); // top right corner 1
  display->drawLine(60, 9, 60, 11, BLACK); // top right corner 2
}

