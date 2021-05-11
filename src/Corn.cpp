#include "Plants.h"
#include "windows.h"
#include "iostream"
#include <sstream>

Corn::Corn(){
    Corn::init();
}
void Corn::grow(int hour, sf::RenderWindow &window) {
    height = height + hour * growth_rate;
    if (height < 1 && height > 0) {

        stage = 1;
        Corn_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn1T.png");
        Corn_sprite.setTexture(Corn_texture, true);
        Corn_sprite.setPosition(580.f, 505.f);
        window.draw(Corn_sprite);
    } else if (height < 2 && height > 1) {
        stage = 2;
        Corn_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn2T.png");
        Corn_sprite.setTexture(Corn_texture, true);
        Corn_sprite.setPosition(576.f, 484.f);
        window.draw(Corn_sprite);
    } else if (height < 3 && height > 2) {
        stage = 3;
        Corn_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn3T.png");
        Corn_sprite.setTexture(Corn_texture, true);
        Corn_sprite.setPosition(573.f, 455.f);
        window.draw(Corn_sprite);
    } else if (height < 4 && height > 3) {
        stage = 4;
        Corn_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn4T.png");
        Corn_sprite.setTexture(Corn_texture, true);
        Corn_sprite.setPosition(572.f, 433.f);
        window.draw(Corn_sprite);
    } else if (height > 4) {
        stage = 5;
        Corn_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn5T.png");
        Corn_sprite.setTexture(Corn_texture, true);
        Corn_sprite.setPosition(568.f, 400.f);
        window.draw(Corn_sprite);
        /* Ingen vand / andet skal drÃ¦be corn
    else if(dead)
    {
        stage = 6;
        Corn_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Corn6T.png");
        Corn_sprite.setTexture(Corn_texture, true);
        Corn_sprite.setPosition(574.f, 201.f);
        window.draw(Corn_sprite);
    }
     */
    }
}
double Corn::getHeight() {
    return height;
}

void Corn::init() {
    Corn_sprite.scale(0.5f, 0.5f);
}
