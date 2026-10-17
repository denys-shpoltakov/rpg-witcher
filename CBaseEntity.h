#pragma once // директива, чтобы компилятор не подключал файл дважды.

#include <string>

class CBaseEntity
{
  protected: // protected для того, чтобы наследники имели доступ к этим полям (m_name, m_health)
    std::string m_name;
    float m_health;
    int m_damage;

  public:
    // Constructor
    CBaseEntity(std::string name, float health, int damage);

    // Method to get player's name
    std::string getEntityName();

    // Method to get player's health
    float getPlayerHealth();

    // Method to attack
    void attack(CBaseEntity target);

    // Method to take damage
    void takeDamage(int damage);
};