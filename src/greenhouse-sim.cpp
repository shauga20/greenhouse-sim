#include <sstream>
#include "SFML/Graphics.hpp"
#include <iostream>
#include "Simulation.h"
#include "Plants.h"


int main()
{
    // create the window
    Simulation Simulation;
    // Run simulation + place plant :)
    Simulation.Run();

    return 0;
}