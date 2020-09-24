#include "std.thread.manager.h"
#include <thread>

void Tama::StdThreadManager::runInThread(void (*callback) (void)) {
  std::thread thread(callback);
}