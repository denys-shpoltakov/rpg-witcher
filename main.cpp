// ==================================================
//
// Основной файл сборки игры.
//
// ==================================================
#include <iostream>
#include <vector>
#include "UserInterface.h"
#include "CPlayer.h"

int main()
{
    mainMenuScreen();
    int menuOption;
    std::cin >> menuOption;

    if ( menuOption == 1 )
    {
        std::cout << "You choiced: " << menuOption << ". Game is starting..." << std::endl;
        std::cout << "Let's start...\n Enter your future character's name, please: ";
        std::string playerName;
        std::cin >> playerName;
        CPlayer Player(playerName, 100.0f, 0, 1, 0); // имя, здоровье, золото, уровень, опыт
        std::cout << "Thank you, " << Player.getPlayerName() << std::endl;

        while( Player.getPlayerHealth() >= 0 )
        {
            // играем...
            gamePlayScreen();
            int choice;
            std::cin >> choice;

            if ( choice == 1 ) // show player's inventory
            {
                Player.showInventory();
            } else
            if ( choice == 2 ) // exit from game
            {
                break;
            } else
            if ( choice == 3 ) // get an item
            {
                CItem Sword = {"Sword", "Just a sword, nothing more.", 15};
                Player.addItem(Sword);
            } else
            if ( choice == 4 )
            {
                Player.takeDamage(25);
                std::cout << Player.getPlayerHealth() << std::endl;
            }
        }

    } else
    
    if ( menuOption == 2 )
    {
        std::cout << "You choiced: " << menuOption << ". Exiting..." << std::endl;
    }
    

    // std::cout << player.getPlayerName() << std::endl;
    // std::cout << player.getPlayerHealth() << std::endl;

    return 0;
}