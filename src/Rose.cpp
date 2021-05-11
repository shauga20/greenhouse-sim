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
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Rose1.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(30.f, 360.f);
        window.draw(Rose_sprite);
    } else if (height < 2 && height > 1) {
        stage = 2;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Rose2.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(574.f, 250.f);
        window.draw(Rose_sprite);
    } else if (height < 3 && height > 2) {
        stage = 3;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Rose3.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(574.f, 201.f);
        window.draw(Rose_sprite);
    } else if (height > 3) {
        stage = 4;
        Rose_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Rose4.png");
        Rose_sprite.setTexture(Rose_texture, true);
        Rose_sprite.setPosition(574.f, 201.f);
        window.draw(Rose_sprite);
    }
}
double Rose::getHeight() {
    return height;
}

void Rose::init() {
    Rose_sprite.scale(0.5f, 0.5f);
}

//
// Created by chri3 on 10/05/2021.
//

