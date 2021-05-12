#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

class Container {
public:
    void getAmount(int hour,sf::RenderWindow &window);
    void getRain(int hour);
    double WaterAmount();
    double RainAmount();
    Container();
    void init();
private:
    double Amount=0.0;
    double Rain=0.0;
    sf::Texture Container_texture;
    sf::Sprite Container_sprite;

    sf::Texture Container_texture2;
    sf::Sprite Container_sprite2;

    sf::Texture Container_texture3;
    sf::Sprite Container_sprite3;

    sf::Texture Container_texture4;
    sf::Sprite Container_sprite4;

    sf::Texture Rain_texture;
    sf::Sprite Rain_sprite;
};
