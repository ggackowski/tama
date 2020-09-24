#!/bin/bash

g++ -pthread -std=c++11 main.cpp src/thread.manager/thread.manager.cpp src/thread.manager/std.thread.manager/std.thread.manager.cpp src/display/display.cpp src/display/classic.display/classic.display.cpp src/display/classic.display/console.classic.display/console.classic.display.cpp src/data.loader/data.loader.cpp src/data.loader/standard.data.loader/standard.data.loader.cpp src/sprite/sprite.cpp src/input/input.cpp src/input/keyboard.input/keyboard.input.cpp -o app