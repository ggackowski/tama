#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "sprite.h" 

#ifndef DISPLAY_H_
#define DISPLAY_H_


namespace Tama {
  class Display {
      public:
        enum Mode {Scale1 = 1, Scale2 = 2};
        Display(Mode);
        ~Display();
        void drawSprite(Tama::Sprite &, byte, byte);  
        void drawExtraSprite(Tama::Sprite &, byte, byte);  
        void clear();
      private:
        
        Adafruit_PCD8544 * display;
        Mode mode;
    };
  }

#endif
