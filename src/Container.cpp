#include "Container.h"
#include <cstdlib>
#include <ctime>
#include "windows.h"

Container::Container(){
    Container::init();
}

void Container::getAmount(int hour,sf::RenderWindow &window) {

    if (hour == 2 & hour < 3){
        Rain_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rain.png");
        Rain_sprite.setTexture(Rain_texture, true);
        Rain_sprite.setPosition(144.f, 210.f);
        window.draw(Rain_sprite);
    }


    if (hour == 3 & hour < 5){
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

    if (hour == 5 & hour < 8) {
        Amount=66;
    }
    else if (hour == 8 & hour < 12) {
        Amount=33;
    }
    else if (hour == 12) {
        Amount=0;
    }

    if (Amount == 0) {
        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container1.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(244.f, 222.9f);
        window.draw(Container_sprite);

    }
    else if (Amount == 33 & Amount > 0) {

        Container_texture2.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container2.png");
        Container_sprite2.setTexture(Container_texture2, true);
        Container_sprite2.setPosition(210.f, 240.f);
        window.draw(Container_sprite2);

    }
    else if (Amount == 66 & Amount > 50) {

        Container_texture3.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container3.png");
        Container_sprite3.setTexture(Container_texture3, true);
        Container_sprite3.setPosition(210.f, 240.f);
        window.draw(Container_sprite3);

    }
    else if (Amount == 100) {

        Container_texture4.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container4.png");
        Container_sprite4.setTexture(Container_texture4, true);
        Container_sprite4.setPosition(105.f, 235.f);
        window.draw(Container_sprite4);

    }
}

double Container::WaterAmount(){
    return Amount;
}

void Container::init() {
    Container_sprite.scale(0.55f, 0.55f);
    Container_sprite2.scale(0.4f, 0.4f);
    Container_sprite3.scale(0.4f, 0.4f);
    Container_sprite4.scale(0.75f, 0.75f);
    Rain_sprite.scale(0.45f, 0.45f);
}