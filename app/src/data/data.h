// #include <Arduino.h>
#ifndef DATA_H_
#define DATA_H_
#include "../input/input.h"
#include "../display/display.h"

namespace Tama {

  // typedef unsigned char unsigned int;

  struct Pet {
    unsigned char age;
    unsigned char hunger;
    unsigned char thirst;
    bool hasPooped;
    bool isIll;
    char name[3];
  };

  struct Date {
    unsigned char day;
    unsigned char month;
    unsigned char hour;
    unsigned char minute;
    unsigned char second;
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

