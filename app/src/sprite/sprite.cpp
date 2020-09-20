#include "sprite.h"

Tama::Sprite::Sprite(unsigned char * data, unsigned char length, unsigned char width, unsigned char height) {
  this->data = new unsigned char [length];
  this->height = height;
  this->width = width;
  this->length = length;
  this->data = data;
  //for (int i = 0; i < length; ++i)
  //  this->data[i] = pgm_read_byte_near(data + i);
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



