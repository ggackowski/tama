#include "input.manager.h"
#include <iostream>

void Tama::InputManager::setInput(Tama::Input * inpt) {
    input = inpt;
}

void Tama::InputManager::setThreadManager(Tama::ThreadManager * tm) {
    threadManager = tm;
}

void Tama::InputManager::addListenerToInput(Tama::KeyListener * keyListener) {
    input->addListener(keyListener);
}

void Tama::InputManager::run() {
    std::cout << 'a';
}

void Tama::InputManager::runInputInThread() {
    threadManager->runInThread(Tama::InputManager::run);
}

Tama::ThreadManager * Tama::InputManager::threadManager;
Tama::Input * Tama::InputManager::input;