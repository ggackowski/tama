#ifndef _INPUT_MANAGER_H_
#define _INPUT_MANAGER_H_

#include "../input/input.h"
#include "../thread.manager/thread.manager.h"

namespace Tama {


    class InputManager {
        public:
            InputManager();
            static void setThreadManager(ThreadManager *);
            static void setInput(Input *);
            static void runInputInThread(); 
            static void addListenerToInput(Tama::KeyListener *);
            static void run();
        private:
            static ThreadManager * threadManager;
            static Input * input;
    };  


}

#endif