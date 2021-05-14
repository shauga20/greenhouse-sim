#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

class Container {
public:
    //Function
    void getAmount(int hour,sf::RenderWindow &window);
    //Constructor
    Container();
    //
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

    sf::Texture PipeTH_texture;
    sf::Sprite PipeTH_sprite;

    sf::Texture PipeTHD_texture;
    sf::Sprite PipeTHD_sprite;

    sf::Texture PipeWH_texture;
    sf::Sprite PipeWH_sprite;

    sf::Texture PipeWHD_texture;
    sf::Sprite PipeWHD_sprite;

    sf::Texture PipeTV_texture;
    sf::Sprite PipeTV_sprite;

    sf::Texture PipeTVD_texture;
    sf::Sprite PipeTVD_sprite;

    sf::Texture PipeWV_texture;
    sf::Sprite PipeWV_sprite;

    sf::Texture PipeWVD_texture;
    sf::Sprite PipeWVD_sprite;
};
