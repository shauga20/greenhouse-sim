#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

//Base class
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
    double growth_rate = 0.0003;
    int stage = 0;
    sf::Texture plant_texture;
    sf::Sprite plant_sprite;

};

//inheritance (Derived class)

class Sunflower: private Plants {

public:
    double getHeight();
    void grow(int hour, sf::RenderWindow &window);
    Sunflower();
private:
    void init();
    double height=0.0;
    int stage = 0;
    double growth_rate = 0.0005;
    sf::Texture Sunflower_texture;
    sf::Sprite Sunflower_sprite;

};
class Corn: private Plants {

public:
    double getHeight();
    void grow(int hour, sf::RenderWindow &window);
    Corn();
private:
    void init();
    double height=0.0;
    int stage = 0;
    double growth_rate = 0.01;
    sf::Texture Corn_texture;
    sf::Sprite Corn_sprite;

};
class Rose: private Plants {

public:
    double getHeight();
    void grow(int hour, sf::RenderWindow &window);
    Rose();
private:
    void init();
    double height=0.0;
    int stage = 0;
    double growth_rate = 0.01;
    sf::Texture Rose_texture;
    sf::Sprite Rose_sprite;

};