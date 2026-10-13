#include "CBaseEntity.h"
#include <iostream>

CBaseEntity::CBaseEntity(std::string name, float health)
{
    m_name     = name;
    m_health   = health;
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