#include "std.thread.manager.h"
#include <thread>

void Tama::StdThreadManager::runInThread(void (*callback) (void)) {
  this->thread = new std::thread(callback);
}

void Tama::StdThreadManager::removeThreads() {
  this->thread->join();
}