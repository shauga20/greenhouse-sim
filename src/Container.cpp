#include "Container.h"
#include <cstdlib>
#include <ctime>
#include "windows.h"

Container::Container(){
    Container::init();
}



void Container::getAmount(int hour,sf::RenderWindow &window) {

    if (hour == 2 & hour < 3){

        Rain=Rain+100;
    }
    if (Rain >= 100) {
        Rain=100;
    }
    Amount = Amount + Rain;

    if (Amount >= 100) {
        Amount=100;
    }

    if (Amount == 0) {

        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container1.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(200.f, 200.f);
        window.draw(Container_sprite);

    }
    else if (Amount == 33) {

        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container2.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(200.f, 200.f);
        window.draw(Container_sprite);

    }
    else if (Amount == 66) {

        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container3.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(200.f, 200.f);
        window.draw(Container_sprite);

    }
    else if (Amount == 100) {

        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container4.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(200.f, 200.f);
        window.draw(Container_sprite);

    }
}

double Container::WaterAmount(){
    return Amount;
}

void Container::init() {
    Container_sprite.scale(0.9f, 0.9f);
}