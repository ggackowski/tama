#include "src/intro/intro.h"
#include "src/textures.h"
#include "src/display/classic.display/nokia5110.classic.display/nokia5110.classic.display.h"
#include "src/input/keypad.input/keypad.input.h"
#include "src/data/data.h"

void App() {
  Tama::Data data;
  
  Tama::Display * d = new Tama::Nokia5110ClassicDisplay(Tama::ClassicDisplay::Mode::Scale1);
  
  Tama::Input * input = new Tama::KeypadInput();
  data.d = d;
  
  data.input = input;
  Tama::intro(&data);
}

void setup() {
  Serial.begin(9600);
}

void loop() { 
    App();
}

