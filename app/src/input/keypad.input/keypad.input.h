#ifndef KEYPAD_INPUT_H_
#define KEYPAD_INPUT_H_
#include "Keypad.h"
#include "../input.h"

namespace Tama {
  
  class KeypadInput : public Input {
    public:
      KeypadInput();
      ~KeypadInput();
      Key getKey();
    private:
     Keypad * keypad;
     unsigned char * rowpins;
     unsigned char * colpins;
     char * ks;
  };

}

#endif
