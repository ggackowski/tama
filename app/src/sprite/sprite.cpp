#include "sprite.h"
// #include <avr/pgmspace.h>
// #include <Arduino.h>

Tama::Sprite::Sprite(const unsigned char * data, unsigned char length, unsigned char width, unsigned char height) {
  this->data = new unsigned char [length];
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

unsigned char * Tama::Sprite::getSpriteData() {
  return data;
}

unsigned char Tama::Sprite::getLength() {
  return length;
}

unsigned char Tama::Sprite::getWidth() {
  return width;
}

Tama::Sprite::~Sprite() {
  delete [] data;
}



