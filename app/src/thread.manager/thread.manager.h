#ifndef _THREAD_MANAGER_H_
#define _THREAD_MANAGER_H_

#include "../input/input.h"

namespace Tama {
  class ThreadManager {
    public:
      ThreadManager() {}
      ~ThreadManager() {}
      virtual void runInThread(void (*) (void)) = 0;
      virtual void removeThreads() = 0;
    private:
  };
}

#endif