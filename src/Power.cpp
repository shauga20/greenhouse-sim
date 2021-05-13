#include "windows.h"
#include "iostream"
#include <sstream>
#include "Power.h"

Power::Power(){
    Power::init();
}
void Power::getCharge(int hour, sf::RenderWindow &window) {

    if (hour >=13 & hour < 16) {
        Sun_texture.loadFromFile("../Sprites/Sun1.png");
        Sun_sprite.setTexture(Sun_texture, true);
        Sun_sprite.setPosition(608.f, 150.f);
        window.draw(Sun_sprite);
    }



    if (hour >=0 & hour < 5) {
        Battery_texture4.loadFromFile("../Sprites/Power4.png");
        Battery_sprite4.setTexture(Battery_texture4, true);
        Battery_sprite4.setPosition(380.f, 389.4f);
        window.draw(Battery_sprite4);
    }
    else if (hour >=5 & hour < 8) {
        Battery_texture4.loadFromFile("../Sprites/Power3.png");
        Battery_sprite4.setTexture(Battery_texture4, true);
        Battery_sprite4.setPosition(380.f, 389.4f);
        window.draw(Battery_sprite4);
    }
    else if (hour >=8 & hour < 12) {
        Battery_texture4.loadFromFile("../Sprites/Power2.png");
        Battery_sprite4.setTexture(Battery_texture4, true);
        Battery_sprite4.setPosition(380.f, 389.4f);
        window.draw(Battery_sprite4);
    }

    if (hour >= 12 & hour < 13 ) {

        Battery_texture1.loadFromFile("../Sprites/Power1.png");
        Battery_sprite1.setTexture(Battery_texture1, true);
        Battery_sprite1.setPosition(380.f, 389.f);
        window.draw(Battery_sprite1);
    }
    else if (hour >= 13 & hour < 14 ) {

        Battery_texture2.loadFromFile("../Sprites/Power2.png");
        Battery_sprite2.setTexture(Battery_texture2, true);
        Battery_sprite2.setPosition(380.f, 389.f);
        window.draw(Battery_sprite2);
    }
    else if (hour >= 14 & hour < 15 ) {

        Battery_texture3.loadFromFile("../Sprites/Power3.png");
        Battery_sprite3.setTexture(Battery_texture3, true);
        Battery_sprite3.setPosition(380.f, 388.f);
        window.draw(Battery_sprite3);
    }
    if (hour >= 15 ) {

        Battery_texture4.loadFromFile("../Sprites/Power4.png");
        Battery_sprite4.setTexture(Battery_texture4, true);
        Battery_sprite4.setPosition(380.f, 389.4f);
        window.draw(Battery_sprite4);
    }
}

double Power::getPower() {
    return life;
}

void Power::init() {
    Battery_sprite1.scale(0.8f, 0.8f);
    Battery_sprite2.scale(0.8f, 0.8f);
    Battery_sprite3.scale(0.8f, 0.8f);
    Battery_sprite4.scale(0.8f, 0.8f);
    Sun_sprite.scale(0.5f, 0.5f);
}