#ifndef KEYBOARD_INPUT_H_
#define KEYBOARD_INPUT_H_

#include "../input.h"
#include <iostream>

namespace Tama {
  class KeyboardInput : public Input {
    public:
      KeyboardInput();
      ~KeyboardInput() {};
      void listenForKeys();
      Key getKey();
    private:
  };
}

#endif