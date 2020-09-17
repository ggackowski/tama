#include "classic.display.h"


Tama::ClassicDisplay::ClassicDisplay(Tama::ClassicDisplay::Mode m) : Display() {
  mode = m;
}

void Tama::ClassicDisplay::drawExtraSprite(Tama::Sprite & sprite, unsigned char x, unsigned char y) {
  unsigned char i = 0, ind = 0, a = 0, b = 0;
  unsigned char tmp = sprite.getSpriteData()[ind];
  while (i < 8 * sprite.getLength()) {
    if (sprite.getSpriteData()[ind] % 2)
            pixelDrawingStrategy(x + a, y + b, Tama::ClassicDisplay::PixelColor::Black);
    a++;
    if (a >= sprite.getWidth()) { a = 0; b++; }
    tmp /= 2; i++;
    if (i % 8 == 0) tmp = sprite.getSpriteData()[++ind];   
  }
  displayPrintingStrategy();
}

void Tama::ClassicDisplay::drawSprite(Tama::Sprite & sprite, unsigned char x, unsigned char y) {
  unsigned char i = 0, ind = 0, a = 0, b = 0;
  unsigned char tmp = sprite.getSpriteData()[ind];
  while (i < 8 * sprite.getLength()) {
    if (tmp % 2)
      if (mode == Tama::ClassicDisplay::Scale1)
            pixelDrawingStrategy(x + a, y + b, Tama::ClassicDisplay::PixelColor::Black);
      else {
            pixelDrawingStrategy(24 + x + 2 * a,11 + y + 2 * b, Tama::ClassicDisplay::PixelColor::Black);
            pixelDrawingStrategy(24 + x + 2 * a + 1,11 + y + 2 * b, Tama::ClassicDisplay::PixelColor::Black);
            pixelDrawingStrategy(24 + x + 2 * a,11 + y + 2 * b + 1, Tama::ClassicDisplay::PixelColor::Black);
            pixelDrawingStrategy(24 + x + 2 * a + 1,11 + y + 2 * b + 1, Tama::ClassicDisplay::PixelColor::Black);
      }
    a++;
    if (a >= sprite.getWidth()) { a = 0; b++; }
    tmp /= 2; i++;
    if (i % 8 == 0) tmp = sprite.getSpriteData()[++ind];  
  }
  displayPrintingStrategy();
}

