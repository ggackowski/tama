#ifndef INPUT_H_
#define INPUT_H_

#include "../shared/interfaces/key.listener.h"
#include "../thread.manager/thread.manager.h"
#include <vector>

namespace Tama {
  class Input {
    public:
      enum Key {A, B, C, UNDEFINED};
      Input();
      ~Input();
      virtual void startListeningForKeys() = 0;
      virtual void addListener(KeyListener *);
      virtual Key getKey() = 0;
    private:
      std::vector<KeyListener *> keyListeners;
      void runKeyListeningThread();
      void informListeners();
  };
}

#endif