#include "input.h"

Tama::Input::Input() {
  runKeyListeningThread();
}

void Tama::Input::addListener(Tama::KeyListener * keyListener) {
  keyListeners.push_back(keyListener);
}

void Tama::Input::informListeners() {
  for (Tama::KeyListener * keyListener : keyListeners) {
    keyListener->afterKeyPressed();
  }
}

void Tama::Input::runKeyListeningThread() {

}