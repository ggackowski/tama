#ifndef CLASSIC_DISPLAY_H_
#define CLASSIC_DISPLAY_H_

#include "../display.h" 

namespace Tama {
  class ClassicDisplay : public Display {
      public:
        enum Mode {Scale1 = 1, Scale2 = 2};
        enum PixelColor {Black, White};
        ClassicDisplay(ClassicDisplay::Mode m);
        ~ClassicDisplay();
        void drawSprite(Tama::Sprite &, unsigned char, unsigned char);  
        void drawExtraSprite(Tama::Sprite &, unsigned char, unsigned char);  
        virtual void clear() = 0;
      
      protected:
        virtual void pixelDrawingStrategy(int x, int y, ClassicDisplay::PixelColor pc) = 0;
        virtual void displayPrintingStrategy() = 0;  
        ClassicDisplay::Mode mode;
    };
  }

#endif