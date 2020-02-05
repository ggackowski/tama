#include <Arduino.h>
#ifndef DATA_H_
#define DATA_H_
#include "input.h"
#include "display.h"

namespace Tama {

  struct Pet {
    byte age;
    byte hunger;
    byte thirst;
    bool hasPooped;
    bool isIll;
    char name[3];
  };

  struct Date {
    byte day;
    byte month;
    byte hour;
    byte minute;
    byte second;
  };
  

  class Data {
    public:
      Pet pet;
      Date date;
      Tama::Input * input;
      Tama::Display * d;
      Data() {
       ;
      }
      ~Data() {
        ;
      }
  };

 
  
}

#endif

