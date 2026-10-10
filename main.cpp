// ==================================================
//
// Основной файл сборки игры.
//
// ==================================================
#include <iostream>
#include <vector>


void mainMenuScreen()
{
    std::cout << "The Witcher" << std::endl;
    std::cout << "Menu options:" << std::endl;
    std::cout << "1. Start Game" << std::endl;
    std::cout << "2. Exit Game" << std::endl;
    std::cout << "Choose an option: ";
}


class CBaseEntity
{
  private:  
    std::string m_name;
    float m_health;
  public:
    int m_gold;
    int m_level;
    int m_exp;

    // Constructor
    CBaseEntity(std::string name, float health, int gold, int level, int exp)
    {
        m_name    = name;
        m_health  = health;
        m_gold    = gold;
        m_level   = level;
        m_exp     = exp;
    }

    // Method to get player's name
    std::string getPlayerName()
    {
        return m_name;
    }

    // Method to get player's health
    float getPlayerHealth()
    {
        return m_health;
    }
};

int main()
{

    mainMenuScreen();
    int choice;
    std::cin >> choice;

    if ( choice == 1)
    {
        std::cout << "You choiced: " << choice << ". Game is starting..." << std::endl;
        std::cout << "Let's start...\n Enter your future character's name, please: ";
        std::string playerName;
        std::cin >> playerName;
        CBaseEntity Player(playerName, 100.0f, 0, 1, 0);
        std::cout << "Thank you, " << Player.getPlayerName();

        while(Player.getPlayerHealth() > 0)
        {
            // играем...
        }

    } else
    
    if ( choice == 2)
    {
        std::cout << "You choiced: " << choice << ". Exiting..." << std::endl;
    }
    

    // std::cout << player.getPlayerName() << std::endl;
    // std::cout << player.getPlayerHealth() << std::endl;

    return 0;
}