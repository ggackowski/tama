#ifndef CONSOLE_CLASSIC_DISPLAY_H_
#define CONSOLE_CLASSIC_DISPLAY_H_

#include "../classic.display.h"


namespace Tama {
  class ConsoleClassicDisplay : public ClassicDisplay {
    public: 
      ConsoleClassicDisplay(Mode);
      ~ConsoleClassicDisplay();
      void clear();

    private:
      const unsigned char width = 18;
      const unsigned char height = 13;
      unsigned char display[18][13];
      void clearDisplayArray();
      void pixelDrawingStrategy(int x, int y, ClassicDisplay::PixelColor pc);
      void displayPrintingStrategy();
  };
}

#endif
