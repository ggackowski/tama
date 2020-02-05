#ifndef INPUT_H_
#define INPUT_H_
#include "Keypad.h"
namespace Tama {
  

  class Input {
    public:
      enum Key {A, B, C, Undefined};
      Input();
      ~Input();
      Key getKey();
    private:
     Keypad * keypad;
     byte * rowpins;
     byte * colpins;
     char * ks;
  };

}

#endif
