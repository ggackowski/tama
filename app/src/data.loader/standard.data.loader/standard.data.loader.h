#include "../data.loader.h"

namespace Tama {
  class StandardDataLoader : public DataLoader {
    public:
      StandardDataLoader() {}
      ~StandardDataLoader() {}
      unsigned char readByte(unsigned char *);
      Sprite * createSpriteWithData(unsigned char * data, unsigned char length, unsigned char width, unsigned char height);
  };
}