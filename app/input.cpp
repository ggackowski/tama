#include "input.h"



Tama::Input::Input() {
  rowpins = new byte;
  colpins = new byte;
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

Tama::Input::Key Tama::Input::getKey() {
   
    char k = keypad->getKey();
    switch(k) {
      case 'A':
         return A;
      case 'B':
         return B;
      case 'C':
         return C;
      default: return Input::Undefined; 
    }
    return A;
}

Tama::Input::~Input() {
  Serial.print("dead");
}

