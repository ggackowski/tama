#include "sprite.h"
#include <avr/pgmspace.h>
#include <Arduino.h>

Tama::Sprite::Sprite(const byte * data, byte length, byte width, byte height) {
  this->data = new byte [length];
  this->height = height;
  this->width = width;
  this->length = length;
  for (int i = 0; i < length; ++i)
    this->data[i] = pgm_read_byte_near(data + i);
      //Serial.print(this->data[i][j]);
      //Serial.print(" ");
      //Serial.print(data[i * width + j]);
   // }
    //Serial.print('\n');
 }


Tama::Sprite::~Sprite() {
  delete [] data;
}



