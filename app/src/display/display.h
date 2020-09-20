#ifndef DISPLAY_H_
#define DISPLAY_H_

#include "../sprite/sprite.h" 

namespace Tama {
  class Display {
      public:
        Display() {};
        ~Display() {};
        virtual void drawSprite(Tama::Sprite &, unsigned char, unsigned char) = 0;  
        virtual void drawExtraSprite(Tama::Sprite &, unsigned char, unsigned char) = 0;  
        virtual void clear() = 0;
    };
  }

#endif
