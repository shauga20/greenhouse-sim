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
        Rain=0;
    }

    if (hour == 3 & hour < 4) {
        Amount=66;
    }
    else if (hour == 4) {
        Amount=33;
    }

    if (Amount == 0) {

        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container1.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(200.f, 200.f);
        window.draw(Container_sprite);

    }
    else if (Amount == 33 & Amount > 0) {

        Container_texture2.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container2.png");
        Container_sprite2.setTexture(Container_texture2, true);
        Container_sprite2.setPosition(200.f, 200.f);
        window.draw(Container_sprite2);

    }
    else if (Amount == 66 & Amount > 50) {

        Container_texture3.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container3.png");
        Container_sprite3.setTexture(Container_texture3, true);
        Container_sprite3.setPosition(200.f, 200.f);
        window.draw(Container_sprite3);

    }
    else if (Amount == 100) {

        Container_texture4.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container4.png");
        Container_sprite4.setTexture(Container_texture4, true);
        Container_sprite4.setPosition(200.f, 200.f);
        window.draw(Container_sprite4);

    }
}

double Container::WaterAmount(){
    return Amount;
}

void Container::init() {
    Container_sprite.scale(0.5f, 0.5f);
    Container_sprite2.scale(0.5f, 0.5f);
    Container_sprite3.scale(0.5f, 0.5f);
    Container_sprite4.scale(0.5f, 0.5f);
}