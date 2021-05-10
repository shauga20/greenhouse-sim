
#include "Simulation.h"
#include <iostream>
#include "Plants.h"
//Private
Simulation::Simulation() : window(sf::VideoMode(800, 600), "Greenhouse Simulator") {
    window.setFramerateLimit(60);
    window.display();
}

void Simulation::Run() {

    sf::Clock deltaClock;

    sf::Text clock_time;
    clock_time.setPosition(700, 50);
    sf::Font font;
    font.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/32441506567156636049eb850b53f02a.ttf");
    clock_time.setFont(font);
    clock_time.setCharacterSize(34);
    clock_time.setFillColor(sf::Color::White);
    std::stringstream ss;

    Plants Blomst;
    Sunflower Sunflower;
    Corn Corn;
    Rose Rose;

    while (window.isOpen()) {

// check all the window's events that were triggered since the last
// iteration of the loop
        while (window.pollEvent(event)) {
// "close requested" event: we close the window
            if (event.type == sf::Event::Closed) window.close();
        }

// clear the window with black color
        window.clear();

        sf::Texture greenhouse_sprite;
        if (!greenhouse_sprite.loadFromFile("C:/Users/chri3/CLionProjects/greenhouse-sim/src/greenhouse.png")) {
            return;
        }
        ss.str(std::string());
        sf::Sprite Green(greenhouse_sprite);
        sf::Time elapTime1 = deltaClock.getElapsedTime();
        int minutes = elapTime1.asSeconds() / 0.05;
        if (minutes == 60) {
            minutes = elapTime1.asSeconds() / 1;
            hour++;
            deltaClock.restart();

        }
        if (hour == 24) {
            return;
        }

        window.draw(Green);

        Blomst.grow(hour,window);
        Sunflower.grow(hour,window);
        Corn.grow(hour,window);
        Rose.grow(hour,window);

        ss << std::to_string(hour) << ':' << std::to_string(minutes);
        clock_time.setString(ss.str());

        window.draw(clock_time);

// end the current frame
        window.display();
    }
}


