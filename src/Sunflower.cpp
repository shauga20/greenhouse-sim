#include "Plants.h"
#include "windows.h"


Sunflower::Sunflower() {
    Sunflower::init();
    growth_rate=0.0003;
}
void Sunflower::init() {
    Sunflower_sprite.scale(0.5f, 0.5f);
}