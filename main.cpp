// ==================================================
//
// Основной файл сборки игры.
//
// ==================================================
#include <iostream>
#include <vector>
#include "CBaseEntity.h"
#include "UserInterface.h"

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
        CBaseEntity CPlayer(playerName, 100.0f, 0, 1, 0); // имя, здоровье, золото, уровень, опыт
        std::cout << "Thank you, " << CPlayer.getPlayerName() << std::endl;

        while( CPlayer.getPlayerHealth() > 0 )
        {
            // играем...
            gamePlayScreen();
            int choice;
            std::cin >> choice;

            if ( choice == 1 ) // show player's inventory
            {
                CPlayer.showInventory();
            } else
            if ( choice == 2 ) // exit from game
            {
                break;
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