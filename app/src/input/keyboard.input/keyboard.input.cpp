#include "keyboard.input.h"

Tama::KeyboardInput::KeyboardInput() {

}

Tama::Key Tama::KeyboardInput::getKey() {
  return Tama::Key::A;
} 

void Tama::KeyboardInput::listenForKeys() {
  std::cout << "no";
  char key = getchar();
  if (key == 'a') {
    lastPressedKey = Tama::Key::A;
    informListeners();
  } else if (key == 's') {
    lastPressedKey = Tama::Key::B;
    informListeners();
  } else if (key == 'd') {
    lastPressedKey = Tama::Key::C;
    informListeners();
  }
  std::cout << "lol";
}
