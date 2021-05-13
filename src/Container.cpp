#include "Container.h"
#include <cstdlib>
#include <ctime>
#include "windows.h"

Container::Container(){
    Container::init();
}

void Container::getAmount(int hour,sf::RenderWindow &window) {

    if (hour == 2 & hour < 3){
        Rain_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rain.png");
        Rain_sprite.setTexture(Rain_texture, true);
        Rain_sprite.setPosition(144.f, 210.f);
        window.draw(Rain_sprite);
    }

    else if (hour >= 16 & hour < 18){
        Rain_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Rain.png");
        Rain_sprite.setTexture(Rain_texture, true);
        Rain_sprite.setPosition(144.f, 210.f);
        window.draw(Rain_sprite);
    }


    if (hour == 3 & hour < 5){
        Rain=Rain+100;
    }

    else if (hour == 16 & hour < 17){
        Rain=Rain+100;
    }
    if (Rain >= 100) {
        Rain=100;
    }
    Amount = Amount + Rain;

    if (Amount >= 100) {
        Amount=100;
        Rain=0;
    }

    if (hour == 5 & hour < 8) {
        Amount=66;
    }
    else if (hour == 8 & hour < 12) {
        Amount=33;
    }
    else if (hour == 12) {
        Amount=0;
    }

    if (Amount == 0) {
        Container_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container1.png");
        Container_sprite.setTexture(Container_texture, true);
        Container_sprite.setPosition(249.f, 222.9f);
        window.draw(Container_sprite);

    }
    else if (Amount == 33 & Amount > 0) {

        Container_texture2.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container2.png");
        Container_sprite2.setTexture(Container_texture2, true);
        Container_sprite2.setPosition(215.f, 240.f);
        window.draw(Container_sprite2);

    }
    else if (Amount == 66 & Amount > 50) {

        Container_texture3.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container3.png");
        Container_sprite3.setTexture(Container_texture3, true);
        Container_sprite3.setPosition(215.f, 240.f);
        window.draw(Container_sprite3);

    }
    else if (Amount == 100) {

        Container_texture4.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/Container4.png");
        Container_sprite4.setTexture(Container_texture4, true);
        Container_sprite4.setPosition(107.f, 232.f);
        window.draw(Container_sprite4);

    }

    // Pipe system
    if (Amount > 0) {
        PipeWHD_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeWHD.png");
        PipeWHD_sprite.setTexture(PipeWHD_texture, true);
        PipeWHD_sprite.setPosition(51.f, 168.f);
        window.draw(PipeWHD_sprite);

        PipeWH_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeWH.png");
        PipeWH_sprite.setTexture(PipeWH_texture, true);
        PipeWH_sprite.setPosition(51.f, 425.f);
        window.draw(PipeWH_sprite);

        PipeWVD_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeWVD.png");
        PipeWVD_sprite.setTexture(PipeWVD_texture, true);
        PipeWVD_sprite.setPosition(233.f, 168.f);
        window.draw(PipeWVD_sprite);

        PipeWV_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeWV.png");
        PipeWV_sprite.setTexture(PipeWV_texture, true);
        PipeWV_sprite.setPosition(233.f, 425.f);
        window.draw(PipeWV_sprite);
    }

    else if (Amount ==0) {
        PipeTHD_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeTHD.png");
        PipeTHD_sprite.setTexture(PipeTHD_texture, true);
        PipeTHD_sprite.setPosition(51.f, 168.f);
        window.draw(PipeTHD_sprite);

        PipeTH_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeTH.png");
        PipeTH_sprite.setTexture(PipeTH_texture, true);
        PipeTH_sprite.setPosition(51.f, 425.f);
        window.draw(PipeTH_sprite);

        PipeTVD_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeTVD.png");
        PipeTVD_sprite.setTexture(PipeTVD_texture, true);
        PipeTVD_sprite.setPosition(233.f, 168.f);
        window.draw(PipeTVD_sprite);

        PipeTV_texture.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Sprites/PipeTV.png");
        PipeTV_sprite.setTexture(PipeTV_texture, true);
        PipeTV_sprite.setPosition(233.f, 425.f);
        window.draw(PipeTV_sprite);
    }



}

double Container::WaterAmount(){
    return Amount;
}

void Container::init() {
    Container_sprite.scale(0.55f, 0.55f);
    Container_sprite2.scale(0.4f, 0.4f);
    Container_sprite3.scale(0.4f, 0.4f);
    Container_sprite4.scale(0.76f, 0.76f);
    Rain_sprite.scale(0.45f, 0.45f);

    PipeWH_sprite.scale(0.47f, 0.4f);
    PipeWHD_sprite.scale(0.47f, 0.4f);
    PipeWVD_sprite.scale(0.54f, 0.4f);
    PipeWV_sprite.scale(0.54f, 0.4f);

    PipeTH_sprite.scale(0.47f, 0.4f);
    PipeTHD_sprite.scale(0.47f, 0.4f);
    PipeTVD_sprite.scale(0.54f, 0.4f);
    PipeTV_sprite.scale(0.54f, 0.4f);
}