#include "Plants.h"
#include "windows.h"


Corn::Corn() {
    Corn::init();
    growth_rate=0.0003;
}
void Corn::init() {
    Corn_sprite.scale(0.5f, 0.5f);
}