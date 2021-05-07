#include <sstream>
#include "SFML/Graphics.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

int hour = 0;
int main(int argc, char const *argv[])
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Greenhouse Simulator");
    window.setFramerateLimit(60);
    sf::Clock deltaClock;

    sf::Text clock_time;
    clock_time.setPosition(700, 50);
    sf::Font font;
    font.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/32441506567156636049eb850b53f02a.ttf");
    clock_time.setFont(font);
    clock_time.setCharacterSize(34);
    clock_time.setFillColor(sf::Color::White);
    std::stringstream ss;


    while (window.isOpen()) {

        // check all the window's events that were triggered since the last
        // iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed) window.close();
        }

        // clear the window with black color
        window.clear();

        sf::Texture greenhouse_sprite;
        if (!greenhouse_sprite.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/greenhouse.png")) {
            return EXIT_FAILURE;
        }
        ss.str(std::string());
        sf::Sprite Green(greenhouse_sprite);
        sf::Time elapTime1 = deltaClock.getElapsedTime();
        int minutes = elapTime1.asSeconds() / 0.1;
            if (minutes == 60) {
                minutes = elapTime1.asSeconds() / 1;
                hour++;
                deltaClock.restart();


            }
            if (hour == 24) {
                hour = 0;
            }


        // Plant1 sprite (perfekt)

        sf::Texture plant_sprite;
        plant_sprite.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Plant1T.png");
        ss.str(std::string());
        sf::Sprite Plant1(plant_sprite);
        Plant1.setPosition(36.f,177.f);
        Plant1.scale(0.35f,0.35f);

        // Plant 2 sprite (xd)
        sf::Texture plant_sprite2;
        plant_sprite2.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/Plant2T.png");
        ss.str(std::string());
        sf::Sprite Plant2(plant_sprite2);
        Plant2.setPosition(26.f,173.f);
        Plant2.scale(0.35f,0.35f);
        
        // Plant 3 sprite (:D)
        


        ss << std::to_string(hour) << ':' << std::to_string(minutes);
        clock_time.setString(ss.str());
        window.draw(Green);
        window.draw(Plant1);
        window.draw(Plant2);
        window.draw(clock_time);

        // end the current frame
        window.display();
    }

    return 0;
}