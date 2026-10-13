#include "CPlayer.h"
#include <iostream>

CPlayer::CPlayer(std::string name, float health, int gold, int level, int exp) : CBaseEntity(name, health), m_gold(gold), m_level(level), m_exp(exp)
{
    // empty
}

void CPlayer::showInventory()
{
    std::cout << m_name << "'s inventory:" << std::endl;
    std::cout << "Gold: " << m_gold << std::endl;
    std::cout << "Level: " << m_level << std::endl;
    std::cout << "Exp: " << m_exp << std::endl;
}