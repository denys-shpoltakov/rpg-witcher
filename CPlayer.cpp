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

    if ( m_inventory.size() > 0 )
    {
        for (int i = 0; i < m_inventory.size(); ++i)
        {
            std::cout << "Slot " << i + 1 << ":" << std::endl;
            std::cout << "Item's name: " << m_inventory[i].m_name << std::endl;
            std::cout << "Item's cost: " << m_inventory[i].m_cost << std::endl;
            std::cout << "Item's info: " << m_inventory[i].m_info << std::endl;
        }
    }
}

void CPlayer::addItem(CItem item)
{
    m_inventory.push_back(item);
}