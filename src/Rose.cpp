#include "Plants.h"
#include "windows.h"
#include "iostream"
#include <sstream>

Rose::Rose(){
    Rose::init();
}
void Rose::grow(int hour, sf::RenderWindow &window) {
    height = height + hour * growth_rate;
    if (height < 1 && height > 0) {

        stage = 1;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose1.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(42.f, 495.f);
        window.draw(Rose_sprite);
    } else if (height < 2 && height > 1) {
        stage = 2;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose2.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(34.f, 445.f);
        window.draw(Rose_sprite);
    } else if (height < 3 && height > 2) {
        stage = 3;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose3.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(32.f, 437.f);
        window.draw(Rose_sprite);
    } else if (height > 3) {
        stage = 4;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose4.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(33.f, 423.f);
        window.draw(Rose_sprite);
    }
}
double Rose::getHeight() {
    return height;
}

void Rose::init() {
    Rose_sprite.scale(0.5f, 0.5f);
}