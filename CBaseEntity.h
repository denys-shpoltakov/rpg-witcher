#pragma once // директива, чтобы компилятор не подключал файл дважды.

#include <string>

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
    CBaseEntity(std::string name, float health, int gold, int level, int exp);

    // Method to get player's name
    std::string getPlayerName();

    // Method to get player's health
    float getPlayerHealth();

    void showInventory();
};