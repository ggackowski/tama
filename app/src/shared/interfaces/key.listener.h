#ifndef _KEY_LISTENER_H_
#define _KEY_LISTENER_H_

#include "../../input/input.h"

namespace Tama {
  class KeyListener {
    public:
      virtual void afterKeyPressed(Input::Key & key) = 0;
  }
}

#endif