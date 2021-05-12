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
};
