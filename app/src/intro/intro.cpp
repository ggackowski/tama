
#include "intro.h"


namespace Tama {

void one(Tama::Data * data) {
  
      Tama::Sprite logo1(startup_1, 30, 18, 13);
      Tama::Sprite logo2(startup_2, 30, 18, 13);
        for (int i = 0; i < 5; ++i) {
        
        data->d->clear();
        
        if (i % 2) 
          data->d->drawSprite(logo2, 0, 0);
        else 
          data->d->drawSprite(logo1, 0, 0);
        delay(1000);
      }
    
}

void two(Tama::Data * data) {
      Tama::Sprite loading2(startup_4, 30, 18, 13);
      Tama::Sprite loading1(startup_3, 30, 18, 13);
      for (int i = 0; i < 4; ++i) {
      data->d->clear();
      if (i % 2) {
                data->d->drawSprite(loading1, 0, 0);
       
      }
      else { 
                data->d->drawSprite(loading2, 0, 0);
        
        //data->d->drawExtraSprite(icon_info, 0, 0);
      }
      delay(500);
}
}
void intro(Tama::Data * data) {
   one(data);
   two(data);
   egg(data);
  }
}

