#include "egg.h"


namespace Tama {
  void egg(Data * data) {
    Tama::Sprite egg1(egg_1, 30, 18, 13);
    Tama::Sprite egg2(egg_2, 30, 18, 13);
    while (data->input->getKey() != Tama::Input::B) {
      data->d->clear();
      data->d->drawSprite(egg1, 0, 0);
      delay(500);
      data->d->clear();
      data->d->drawSprite(egg2, 0, 0);
      delay(500);
    }
  }
}

