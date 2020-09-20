#include "standard.data.loader.h"

unsigned char Tama::StandardDataLoader::readByte(unsigned char *) {
  return 0;
}

Tama::Sprite * Tama::StandardDataLoader::createSpriteWithData(unsigned char * data, unsigned char length, unsigned char width, unsigned char height) {
  return new Tama::Sprite(data, length, width, height);
}