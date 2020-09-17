CC=g++

make_command: app/app.ino app/display/console.display/console.display.cpp app/egg/egg.cpp app/input/input.cpp app/intro/intro.cpp app/sprite/sprite.cpp
     $(CC) app/app.ino app/display/console.display/console.display.cpp app/egg/egg.cpp app/input/input.cpp app/intro/intro.cpp app/sprite/sprite.cpp -o app.exe