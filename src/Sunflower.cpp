#include "Plants.h"
#include "windows.h"
#include "iostream"
#include <sstream>

Sunflower::Sunflower(){
    Sunflower::init();
}
void Sunflower::grow(int hour, sf::RenderWindow &window)
{
    height = height + hour * growth_rate;
    if(height < 1 && height > 0)
    {

        stage = 1;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower1.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(574.f, 201.f);
        window.draw(Sunflower_sprite);
    }
    else if(height < 2 && height > 1)
    {
        stage = 2;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower2.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(569.f, 210.f);
        window.draw(Sunflower_sprite);
    }
    else if(height < 3 && height > 2)
    {
        stage = 3;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower3.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(564.f, 174.f);
        window.draw(Sunflower_sprite);
    }
    else if(height < 4 && height > 3)
    {
        stage = 4;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower4.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(564.f, 158.f);
        window.draw(Sunflower_sprite);
    }
    else if(height < 5 && height > 4)
    {
        stage = 5;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower5.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(564.f, 140.f);
        window.draw(Sunflower_sprite);
    }
    else if(height > 5)
    {
        stage = 6;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower6.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(564.f, 140.f);
        window.draw(Sunflower_sprite);
    }
    /* Ingen vand / andet skal dræbe blomsten
    else if(hei)
    {
        stage = 7;
        Sunflower_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Sunflower7.png");
        Sunflower_sprite.setTexture(Sunflower_texture, true);
        Sunflower_sprite.setPosition(40.f, 170.f);
        window.draw(Sunflower_sprite);
    }
     */
}

double Sunflower::getHeight()
{
    return height;
}

void Sunflower::init(){
    Sunflower_sprite.scale(0.5f,0.5f);
}
