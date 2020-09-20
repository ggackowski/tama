#include "src/display/classic.display/console.classic.display/console.classic.display.h"
#include "src/input/keyboard.input/keyboard.input.h"
#include "src/sprite/sprite.h"
#include "src/data.loader/standard.data.loader/standard.data.loader.h"
#include "src/textures_exe.h"
#include <iostream>

int main() {
  Tama::Display * display = new Tama::ConsoleClassicDisplay(Tama::ClassicDisplay::Mode::Scale1);
  Tama::Input * input = new Tama::KeyboardInput();
  Tama::DataLoader * dataLoader = new Tama::StandardDataLoader();

  Tama::Sprite * sprite = dataLoader->createSpriteWithData(startup_1, 30, 18, 13);

  display->drawSprite(*sprite, 0, 0);
}