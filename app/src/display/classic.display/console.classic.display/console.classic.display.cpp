#include "console.classic.display.h"
#include <iostream>

Tama::ConsoleClassicDisplay::ConsoleClassicDisplay(Tama::ClassicDisplay::Mode m) : Tama::ClassicDisplay(m) {
  this->clearDisplayArray();
}

void Tama::ConsoleClassicDisplay::clearDisplayArray() {
  for (int i = 0; i < this->width; ++i)
    for (int j = 0; j < this->height; ++j)
      this->display[i][j] = ' ';
}

void Tama::ConsoleClassicDisplay::displayPrintingStrategy() {
    for (int i = 0; i < this->height; ++i) {
    for (int j = 0; j < this->width; ++j)
      std::cout << this->display[j][i];
    std::cout << std::endl;
  }
}

Tama::ConsoleClassicDisplay::~ConsoleClassicDisplay() {}


void Tama::ConsoleClassicDisplay::pixelDrawingStrategy(int x, int y, ClassicDisplay::PixelColor pc) {
  if (pc == ClassicDisplay::PixelColor::Black) {
    this->display[x][y] = 'O';
  } else {
    this->display[x][y] = ' ';
  }
}


void Tama::ConsoleClassicDisplay::clear() {
  system("clear");
  this->clearDisplayArray();
}
