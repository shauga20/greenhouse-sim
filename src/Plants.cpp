#include "Plants.h"
#include "windows.h"
#include "iostream"


Plants::Plants(){
}
void Plants::grow(int hour, sf::RenderWindow &window, std::vector<std::string> filepath, double pos[][2],sf::Texture plant_texture,sf::Sprite plant_sprite)
{
    height = height + hour * growth_rate;

    if(height < 2 && height >= 0)
    {
        stage = 1;
        plant_texture.loadFromFile(filepath.at(0));
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(pos[0][0], pos[0][1]);
        window.draw(plant_sprite);
    }
    else if(height < 3 && height > 2)
    {
        stage = 2;
        plant_texture.loadFromFile(filepath.at(1));
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(pos[1][0], pos[1][1]);
        window.draw(plant_sprite);
    }
    else if(height <= 5 && height >=3)
    {
        stage = 3;
        plant_texture.loadFromFile(filepath.at(2));
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(pos[2][0], pos[2][1]);
        window.draw(plant_sprite);
    }
    else if(height <= 7 && height >= 5)
    {
        stage = 4;
        plant_texture.loadFromFile(filepath.at(3));
        plant_sprite.setTexture(plant_texture, true);
        plant_sprite.setPosition(pos[3][0], pos[3][1]);
        window.draw(plant_sprite);
    }
    else if(height <= 9 && height >= 7)
    {
        stage = 5;
        if(filepath.size() < 5)
        {
            plant_texture.loadFromFile(filepath.back());
            plant_sprite.setTexture(plant_texture, true);
            plant_sprite.setPosition(pos[3][0], pos[3][1]);
        }
        else
        {
            plant_texture.loadFromFile(filepath.at(4));
            plant_sprite.setTexture(plant_texture, true);
            plant_sprite.setPosition(pos[4][0], pos[4][1]);
        }
        window.draw(plant_sprite);

    }
    else
    {
        stage = 6;
        if(filepath.size() < 6)
        {
            plant_texture.loadFromFile(filepath.back());
            plant_sprite.setTexture(plant_texture, true);
            plant_sprite.setPosition(pos[3][0], pos[3][1]);
        }
        else
        {
            plant_texture.loadFromFile(filepath.at(5));
            plant_sprite.setTexture(plant_texture, true);
            plant_sprite.setPosition(pos[5][0], pos[5][1]);
        }
        window.draw(plant_sprite);

    }

}

double Plants::getHeight()
{
    return height;
}