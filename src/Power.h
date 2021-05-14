#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

class Power{
public:
    void getCharge(int hour,sf::RenderWindow &window);
    double getPower();
    Power();

private:
    void init();

    sf::Texture Battery_texture1;
    sf::Sprite Battery_sprite1;

    sf::Texture Battery_texture2;
    sf::Sprite Battery_sprite2;

    sf::Texture Battery_texture3;
    sf::Sprite Battery_sprite3;

    sf::Texture Battery_texture4;
    sf::Sprite Battery_sprite4;

    sf::Texture Sun_texture;
    sf::Sprite Sun_sprite;

};