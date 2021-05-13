#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

//Base class
class Plants {
public:
    // Growth
    void grow(int hour, sf::RenderWindow &window, std::vector<std::string> filepath, double pos[][2],sf::Texture, sf::Sprite);
    // Height
    double getHeight();
    // constructor
    Plants();
    double growth_rate=0.0;
private:
    double height=0.0;
    int stage;
};

//inheritance (Derived class)
class Flower: public Plants {
public:
    Flower();
    std::vector<std::string> filepath = {"C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Plant1T.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Plant2T.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Plant3T.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Plant4T.png"};
    double pos[4][2] = {{36.f, 177.f}, {26.f, 173.f}, {26.f, 184.f}, {24.f, 120.f}};
    sf::Texture Flower_texture;
    sf::Sprite Flower_sprite;
private:
    void init();
    double height=0.0;
    int stage;


};

class Sunflower: public Plants {

public:
    Sunflower();
    std::vector<std::string> filepath = {"C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower1.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower2.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower3.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower4.png","C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower5.png","C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower6.png"};
    double pos[6][2] = {{574.f, 201.f}, {569.f, 210.f}, {564.f, 174.f}, {564.f, 158.f}, {564.f, 140.f}, {564.f, 140.f}};
    sf::Texture Sunflower_texture;
    sf::Sprite Sunflower_sprite;
private:
    void init();
    double height=0.0;
    int stage = 0;


};
class Corn: public Plants {

public:
    Corn();
    std::vector<std::string> filepath = {"C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn1T.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn2T.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn3T.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn4T.png","C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn5T.png","C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Corn6T.png"};
    double pos[6][2] = {{580.f, 505.f}, {576.f, 484.f}, {573.f, 455.f}, {572.f, 433.f}, {568.f, 400.f}, {568.f, 400.f}};
    sf::Texture Corn_texture;
    sf::Sprite Corn_sprite;
private:
    void init();
    double height=0.0;
    int stage;

};
class Rose: public Plants {

public:
    Rose();
    std::vector<std::string> filepath = {"C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose1.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose2.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose3.png", "C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rose4.png"};
    double pos[4][2] = {{42.f, 495.f}, {34.f, 445.f}, {32.f, 437.f}, {33.f, 423.f}};
    sf::Texture Rose_texture;
    sf::Sprite Rose_sprite;
private:
    void init();
    double height=0.0;
    int stage;

};