#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "display.h"

Tama::Display::Display(Tama::Display::Mode m) {
  
  mode = m;
  display = new Adafruit_PCD8544(13, 12, 11, 10, 9);
  display->begin();
  display->setContrast(60);
  
}

Tama::Display::~Display() {
  delete display;
}

void Tama::Display::drawExtraSprite(Tama::Sprite & sprite, byte x, byte y) {
  /*for (int i = 0; i < sprite.height; ++i)
    for (int j = 0; j < sprite.width; ++j)
      if (sprite.data[i][j] == true)
        display->drawPixel(x + j, y + i, BLACK);
  display->display();
*/
  byte i = 0, ind = 0, a = 0, b = 0;
  byte tmp = sprite.data[ind];
  while (i < 8 * sprite.length) {
    if (sprite.data[ind] % 2)
            display->drawPixel(x + a, y + b, BLACK);
    a++;
    if (a >= sprite.width) { a = 0; b++; }
    tmp /= 2; i++;
    if (i % 8 == 0) tmp = sprite.data[++ind];   
  }
  display->display();
  
}

void Tama::Display::drawSprite(Tama::Sprite & sprite, byte x, byte y) {
  //Serial.print(x);
  //Serial.print(y);
  //Serial.print(sprite.height);
 
  /*for (int i = 0; i < sprite.height; ++i)
    for (int j = 0; j < sprite.width; ++j)
      if (sprite.data[i][j] == true)
        if (mode == Tama::Display::Scale1)
          display->drawPixel(x + j, y + i, BLACK);
        else {
          display->drawPixel(24 + x + 2 * j,11 + y + 2 * i, BLACK);
          display->drawPixel(24 + x + 2 * j + 1,11 + y + 2 * i, BLACK);
          display->drawPixel(24 + x + 2 * j,11 + y + 2 * i + 1, BLACK);
          display->drawPixel(24 + x + 2 * j + 1,11 + y + 2 * i + 1, BLACK);
        }
  */
  byte i = 0, ind = 0, a = 0, b = 0;
  byte tmp = sprite.data[ind];
  while (i < 8 * sprite.length) {
    if (tmp % 2)
      if (mode == Tama::Display::Scale1)
            display->drawPixel(x + a, y + b, BLACK);
      else {
            display->drawPixel(24 + x + 2 * a,11 + y + 2 * b, BLACK);
            display->drawPixel(24 + x + 2 * a + 1,11 + y + 2 * b, BLACK);
            display->drawPixel(24 + x + 2 * a,11 + y + 2 * b + 1, BLACK);
            display->drawPixel(24 + x + 2 * a + 1,11 + y + 2 * b + 1, BLACK);
      }
    a++;
    if (a >= sprite.width) { a = 0; b++; }
    tmp /= 2; i++;
    if (i % 8 == 0) tmp = sprite.data[++ind];  
  }
  display->display();
}

void Tama::Display::clear() {
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

