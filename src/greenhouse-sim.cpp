#include <sstream>
#include "SFML/Graphics.hpp"
#include <iostream>
#include "Simulation.h"
#include <cstdlib>
#include <ctime>
#include "Plants.h"


int main()
{
    // create the window
    Simulation Simulation;
    // Run simulation
    Simulation.Run();

    return 0;
}