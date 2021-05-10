#pragma once
#include "SFML/Graphics.hpp"
#include <sstream>
#include <iostream>

class Simulation {
public:
    Simulation();
    void Run();


private:
    int hour=0;
    sf::RenderWindow window;
    sf::Event event;



};