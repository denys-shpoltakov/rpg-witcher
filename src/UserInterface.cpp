#include "../include/UserInterface.h"
#include <iostream>

void mainMenuScreen()
{
    std::cout << "The Witcher" << std::endl;
    std::cout << "Menu options:" << std::endl;
    std::cout << "1. Start Game" << std::endl;
    std::cout << "2. Exit Game" << std::endl;
    std::cout << "Choose an option: ";
}

void gamePlayScreen()
{
    std::cout << "The Witcher" << std::endl;
    std::cout << "1. Inventory" << std::endl;
    std::cout << "2. Exit game" << std::endl;
    std::cout << "3. Add an item" << std::endl;
    std::cout << "4. Fight a zombie" << std::endl;
    std::cout << "Choose an option: ";
}

void fightingSystemScreen()
{
    std::cout << "Decide, what to do:" << std::endl;
    std::cout << "1. Attack an enemy" << std::endl;
    std::cout << "2. Run" << std::endl;
}