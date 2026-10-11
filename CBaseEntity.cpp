#include "CBaseEntity.h"

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