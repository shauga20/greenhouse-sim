#include "Plants.h"
#include "windows.h"

//constructor
Flower::Flower() {
    //Class method
    Flower::init();
    growth_rate=0.0003;
}
//Void function scaling the sprite
void Flower::init() {
    Flower_sprite.scale(0.35f, 0.35f);
}