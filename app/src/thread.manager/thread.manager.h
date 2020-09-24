#ifndef _THREAD_MANAGER_H_
#define _THREAD_MANAGER_H_

namespace Tama {
  class ThreadManager {
    public:
      ThreadManager() {}
      ~ThreadManager() {}
      virtual void runInThread(void (*callback) (void)) = 0;
    private:
  };
}

#endif