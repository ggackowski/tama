#include "intro.h"
#include "textures.h"

void App() {
  Tama::Data data;
  
  Tama::Display d(Tama::Display::Scale2);
  
  Tama::Input input;
  data.d = &d;
  
  data.input = &input;
  Tama::intro(&data);
}

void setup() {
  Serial.begin(9600);
}

void loop() { 
    App();
}

