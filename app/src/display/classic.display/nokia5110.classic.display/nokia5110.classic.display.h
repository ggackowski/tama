#ifndef NOKIA5110_CLASSIC_DISPLAY_H_
#define NOKIa5110_CLASSIC_DISPLAY_H_

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "../classic.display.h"

namespace Tama {
  class Nokia5110ClassicDisplay : public ClassicDisplay {
    public: 
      Nokia5110ClassicDisplay(ClassicDisplay::Mode);
      ~Nokia5110ClassicDisplay();
      void clear();
    
    private:
      Adafruit_PCD8544 * display;
      void pixelDrawingStrategy(int x, int y, PixelColor pc);
      void displayPrintingStrategy();
  };
}

#endif
