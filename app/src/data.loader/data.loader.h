#ifndef _DATA_LOADER_H_
#define _DATA_LOADER_H_

#include "../sprite/sprite.h"

namespace Tama {
  class DataLoader {
    public:
    DataLoader() {};
    ~DataLoader() {};
    virtual unsigned char readByte(unsigned char *) = 0;
    virtual Sprite * createSpriteWithData(unsigned char * data, unsigned char length, unsigned char width, unsigned char height) = 0;
  };
}

#endif