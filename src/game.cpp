// ==================================================
//
// Main file. Game build
//
// ==================================================

#include <iostream>
#include "../include/UserInterface.h"
#include "../include/CBasePlayer.h"
#include "../include/CBaseEnemy.h"

int main()
{
    mainMenuScreen();
    int menuOption;
    std::cin >> menuOption;

    if ( menuOption == 1 ) // NOTE: this choice starting a game
    {
        // NOTE: showing client's choice and asking future name of his character
        std::cout << "You choiced: " << menuOption << ". Game is starting..." << std::endl;
        std::cout << "Let's start...\n Enter your future character's name, please: ";
        std::string playerName;
        std::cin >> playerName;
        CBasePlayer Player(playerName, 100.0f, 10, 0, 1, 0); // NOTE: Player(name, health, damage, gold, level, experience)
        std::cout << "Thank you, " << Player.GetEntityName() << std::endl;

        // NOTE: game cycle is starting...

        while( Player.GetEntityHealth() > 0 ) // NOTE: the game will continue until Player's HP is not equals 0
        {
            // Playing...
            gamePlayScreen(); // NOTE: this function shows a UI
            int choice;
            std::cin >> choice;

            if ( choice == 1 ) // NOTE: this choice show player's inventory
            {
                Player.ShowInventory();
            } else
            if ( choice == 2 ) // NOTE: this choice lets player exit a game
            {
                break;
            } else
            if ( choice == 3 ) // NOTE: this choice lets add an item to player
            {
                CItem Sword = {"Sword", "Just a sword, nothing more.", 15};
                Player.AddItem(Sword);
            } else
            if ( choice == 4 ) // NOTE: this choice starting fighting system
            {
                CBaseEnemy enemy = {"Zombie", 100.0f, 5, 5}; // NOTE: Enemy(name, health, damage, gold)
                while ( enemy.GetEntityHealth() >= 0 && Player.GetEntityHealth() >= 0 ) // NOTE: fighting cycle. Player will fight until Player's
                                                                                      // or Enemie's HP will not equals 0
                {
                    // HACK: Hardcoded combat system. Watch down on FIXME
                    // FIXME: That's need to have own UI.
                    std::cout << "type 1 to attack" << std::endl;
                    std::cin >> choice; 
                    
                    if ( choice == 1 ) // NOTE: player attacks an enemy
                    {
                        Player.Attack(enemy);
                        std::cout << enemy.GetEntityHealth() << std::endl;
                        if ( enemy.GetEntityHealth() <= 0)
                        {
                            break;
                            // NOTE: just returning to actions menu ( gamePlayScreen() )
                        }
                    }
                }
            }
            // TODO: path system may be? You can walk around locations, meet enemies, loot some resources and find seller or buyer
            // (dealer).
            //             Pseudocode:
            // ===================================
            // if (choice == 5)
            // {
            //     // code...
            // }
            // ===================================
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