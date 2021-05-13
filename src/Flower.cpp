#include "Plants.h"
#include "windows.h"


Flower::Flower() {
    Flower::init();
    growth_rate=0.0003;
}
void Flower::init() {
    Flower_sprite.scale(0.35f, 0.35f);
}