#include "CBaseEntity.h"
#include <iostream>

CBaseEntity::CBaseEntity(std::string name, float health, int damage)
{
    m_name     = name;
    m_health   = health;
    m_damage   = damage;
}

// Method to get player's name

std::string CBaseEntity::getEntityName() // :: <-- scope operator
{
    return m_name;
}

// Method to get player's health

float CBaseEntity::getPlayerHealth()  // :: <-- scope operator
{
    return m_health;
}

// Method to attack

void CBaseEntity::attack(CBaseEntity target)
{
    target.takeDamage(m_damage);
}

// Method to get damage

void CBaseEntity::takeDamage(int damage)
{
    m_health -= damage;
    std::cout << "You got " << damage << " damage!" << std::endl;
}