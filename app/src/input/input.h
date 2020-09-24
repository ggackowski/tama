#ifndef INPUT_H_
#define INPUT_H_

#include "../shared/interfaces/key.listener.h"
#include "../shared/enums/key.h"
#include "../thread.manager/thread.manager.h"
#include <vector>

namespace Tama {
  class Input {
    public:
      Input();
      ~Input();
      void addListener(KeyListener *);
      virtual void listenForKeys() = 0;
      virtual Key getKey() = 0;
    private:
      std::vector<KeyListener *> keyListeners;
    protected:
      Key lastPressedKey;
      void informListeners();
  };
}

#endif