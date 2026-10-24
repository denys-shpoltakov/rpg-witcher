#pragma once // директива, чтобы компилятор не подключал файл дважды.

#include <string>

class CBaseEntity
{
  protected: // protected для того, чтобы наследники имели доступ к этим полям (m_name, m_health)
    std::string m_szName;
    float m_flHealth;
    int m_nDamage;

  public:
    // Constructor
    CBaseEntity(std::string name, float health, int damage);

    // Method to get player's name
    std::string GetEntityName();

    // Method to get player's health
    float GetEntityHealth();

    // Method to attack
    void Attack(CBaseEntity& target);

    // Method to take damage
    void TakeDamage(int damage);
};