#ifndef KEYBOARD_INPUT_H_
#define KEYBOARD_INPUT_H_

#include "../input.h"

namespace Tama {
  class KeyboardInput : public Input {
    public:
      KeyboardInput() {};
      ~KeyboardInput() {};
      Key getKey();
    private:
  };
}

#endif