#ifndef SPRITE_H_
#define SPRITE_H_

namespace Tama {
  class Sprite {
     public: 
      Sprite(unsigned char * data, unsigned char length, unsigned char width, unsigned char height);
      unsigned char * getSpriteData();
      unsigned char getLength();
      unsigned char getWidth();
      ~Sprite();
     private:
      friend class Display;
      unsigned char * data;
      unsigned char width, height;
      unsigned char length;
  };
}

#endif
