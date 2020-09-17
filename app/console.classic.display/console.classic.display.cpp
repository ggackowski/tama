#include "console.classic.display.h"
#include <windows.h>
#include <iostream>

void system(char * a) {

}

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

void Tama::ConsoleClassicDisplay::drawExtraSprite(Tama::Sprite & sprite, unsigned char x, unsigned char y) {
  unsigned char i = 0, ind = 0, a = 0, b = 0;
  unsigned char tmp = sprite.getSpriteData()[ind];
  while (i < 8 * sprite.getLength()) {
    if (sprite.getSpriteData()[ind] % 2)
            this->display[x + a][y + b] = 'X';
    a++;
    if (a >= sprite.getWidth()) { a = 0; b++; }
    tmp /= 2; i++;
    if (i % 8 == 0) tmp = sprite.getSpriteData()[++ind];   
  }
  this->displayPrintingStrategy();
  
}

void Tama::ConsoleClassicDisplay::drawSprite(Tama::Sprite & sprite, unsigned char x, unsigned char y) {
  unsigned char i = 0, ind = 0, a = 0, b = 0;
  unsigned char tmp = sprite.getSpriteData()[ind];
  while (i < 8 * sprite.getLength()) {
    if (tmp % 2)
      if (mode == Tama::Display::Scale1)
            this->display[x + a][y + b] = 'X';
      else {
            this->display[24 + x + 2 * a][11 + y + 2 * b] = 'X';
            this->display[24 + x + 2 * a + 1][11 + y + 2 * b] = 'X';
            this->display[24 + x + 2 * a][11 + y + 2 * b + 1] = 'X';
            this->display[24 + x + 2 * a + 1][11 + y + 2 * b + 1] = 'X';
      }
    a++;
    if (a >= sprite.getWidth()) { a = 0; b++; }
    tmp /= 2; i++;
    if (i % 8 == 0) tmp = sprite.getSpriteData()[++ind];  
  }
  this->displayPrintingStrategy();
}

void Tama::ConsoleClassicDisplay::clear() {
  system('cls');
  this->clearDisplayArray();
}
