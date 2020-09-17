#include "keypad.input.h"



Tama::KeypadInput::KeypadInput() {
  rowpins = new unsigned char;
  colpins = new unsigned char;
  ks = new char[3];
  
  ks[0] = 'A';
  ks[1] = 'B';
  ks[2] = 'C';
  rowpins[0] = 5;
  colpins[0] = 2;
  colpins[1] = 3;
  colpins[2] = 4;
  
  keypad = new Keypad(ks, rowpins, colpins, 1, 3);
}

Tama::Input::Key Tama::KeypadInput::getKey() {
   
    char k = keypad->getKey();
    switch(k) {
      case 'A':
         return A;
      case 'B':
         return B;
      case 'C':
         return C;
      default: return Input::UNDEFINED; 
    }
    return A;
}

Tama::KeypadInput::~KeypadInput() {
  Serial.print("dead");
}

