#ifndef _STD_THREAD_MANAGER_H_
#define _STD_THREAD_MANAGER_H_

#include "../thread.manager.h"
#include <thread>

namespace Tama {
  class StdThreadManager : public ThreadManager {
    public:
      StdThreadManager() {}
      ~StdThreadManager() {}
      void runInThread(void (*) (void));
      void removeThreads();
    private:
      std::thread * thread;
  };
}

#endif