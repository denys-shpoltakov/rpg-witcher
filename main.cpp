// ==================================================
//
// Основной файл сборки игры.
//
// ==================================================
#include <iostream>
#include <vector>

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
    int getPlayerHealth()
    {
        return m_health;
    }
};

int main()
{

    CBaseEntity Player("Geralt", 100.0f, 0, 1, 0);
    std::cout << Player.getPlayerName() << std::endl;

    // std::cout << player.getPlayerName() << std::endl;
    // std::cout << player.getPlayerHealth() << std::endl;
    
    return 0;
}