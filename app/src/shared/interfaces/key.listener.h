#ifndef _KEY_LISTENER_H_
#define _KEY_LISTENER_H_

#include "../../input/input.h"
#include "../enums/key.h"

namespace Tama {
  class KeyListener {
    public:
      virtual void afterKeyPressed(Key & key) = 0;
  };
}

#endif