#include "src/display/classic.display/console.classic.display/console.classic.display.h"
// #include "src/input/keyboard.input/keyboard.input.h"
#include "src/sprite/sprite.h"
#include "src/data.loader/standard.data.loader/standard.data.loader.h"
#include "src/textures_exe.h"
#include "src/thread.manager/std.thread.manager/std.thread.manager.h"
#include <iostream>

void f() {
  while (1) {
    std::cout << "aaaa\n";
  }
}

int main() {
  /*
  Tama::Display * display = new Tama::ConsoleClassicDisplay(Tama::ClassicDisplay::Mode::Scale1);
  // Tama::Input * input = new Tama::KeyboardInput();
  Tama::DataLoader * dataLoader = new Tama::StandardDataLoader();

  Tama::Sprite * sprite1 = dataLoader->createSpriteWithData(startup_1, 30, 18, 13);
  Tama::Sprite * sprite2 = dataLoader->createSpriteWithData(startup_2, 30, 18, 13);
  Tama::Sprite * sprite3 = dataLoader->createSpriteWithData(egg_1, 30, 18, 13);
  Tama::Sprite * sprite4 = dataLoader->createSpriteWithData(egg_2, 30, 18, 13);
  int a;

  display->drawSprite(*sprite1, 0, 0);
  std::cin >> a;
  display->clear();
  display->drawSprite(*sprite2, 0, 0);
    std::cin >> a;
  display->clear();
  display->drawSprite(*sprite3, 0, 0);
    std::cin >> a;
  display->clear();
  display->drawSprite(*sprite4, 0, 0);
    std::cin >> a;
  display->clear();
  */

  Tama::ThreadManager * threadManager = new Tama::StdThreadManager();
  threadManager->runInThread(f);

  while (1) {
    std::cout << "bbbb\n";
  }
}