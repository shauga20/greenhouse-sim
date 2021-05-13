#include "Plants.h"
#include "windows.h"


Rose::Rose(){
    Rose::init();
    growth_rate=0.0002;
}
void Rose::init() {
    Rose_sprite.scale(0.5f, 0.5f);
}