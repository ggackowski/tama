#ifndef SPRITE_H_
#define SPRITE_H_
#include <Arduino.h>


namespace Tama {
  class Sprite {
     public: 
      Sprite(const byte * data, byte length, byte width, byte height);
      ~Sprite();
     private:
      friend class Display;
      byte * data;
      byte width, height;
      byte length;
  };
}

#endif
