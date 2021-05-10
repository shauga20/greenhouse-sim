#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

class Plants {
public:
    // Growth
    void grow(int hour, sf::RenderWindow &window);
    // Height
    double getHeight();
    // constructor
    Plants();
private:
    void init();
    double height=0.0;
    double growth_rate = 0.0005;
    int stage = 0;
    sf::Texture plant_texture;
    sf::Sprite plant_sprite;

};
