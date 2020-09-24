#include "src/display/classic.display/console.classic.display/console.classic.display.h"
#include "src/input/keyboard.input/keyboard.input.h"
#include "src/sprite/sprite.h"
#include "src/data.loader/standard.data.loader/standard.data.loader.h"
#include "src/textures_exe.h"
#include "src/thread.manager/std.thread.manager/std.thread.manager.h"
#include <iostream>
#include <unistd.h>

void keyListening() {
  Tama::Input * input = new Tama::KeyboardInput();
  while (true) {
    input->listenForKeys();
    std::cout << "na";
  }
}

void listenForKeyPressed(Tama::ThreadManager * threadManager) {
  threadManager->runInThread(keyListening);
}

int main() {
  Tama::Display * display = new Tama::ConsoleClassicDisplay(Tama::ClassicDisplay::Mode::Scale1);
  Tama::ThreadManager * threadManager = new Tama::StdThreadManager();
  Tama::DataLoader * dataLoader = new Tama::StandardDataLoader();

  Tama::Sprite * sprite3 = dataLoader->createSpriteWithData(egg_1, 30, 18, 13);
  Tama::Sprite * sprite4 = dataLoader->createSpriteWithData(egg_2, 30, 18, 13);

  listenForKeyPressed(threadManager);

  int a = 0;

  display->clear();

  while (true) {
    display->clear();
    if (a == 1) {
      display->drawSprite(*sprite3, 0, 0);
      a = 0;
    } else {
      display->drawSprite(*sprite4, 0, 0);
      a = 1;
    }
    sleep(1);
  }




  // while (1) {
    // std::cout << "bbbb\n";
  // }
}