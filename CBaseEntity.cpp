#include "CBaseEntity.h"
#include <iostream>

CBaseEntity::CBaseEntity(std::string name, float health, int gold, int level, int exp)
{
    m_name     = name;
    m_health   = health;
    m_gold     = gold;
    m_level    = level;
    m_exp      = exp;
}

// Method to get player's name

std::string CBaseEntity::getPlayerName() // :: <-- scope operator
{
    return m_name;
}

// Method to get player's health

float CBaseEntity::getPlayerHealth()  // :: <-- scope operator
{
    return m_health;
}

void CBaseEntity::showInventory()
{
    std::cout << "=== " << m_name << "'s INVENTORY" << " ===" << std::endl;
    std::cout << "Gold: " << m_gold << std::endl;
    std::cout << "Level: " << m_level << std::endl;
    std::cout << "EXP: " << m_exp << std::endl;
}