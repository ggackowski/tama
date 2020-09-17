#ifndef INPUT_H_
#define INPUT_H_

namespace Tama {
  class Input {
    public:
      enum Key {A, B, C, UNDEFINED};
      Input() {};
      ~Input();
      virtual Key getKey() = 0;
  };
}

#endif