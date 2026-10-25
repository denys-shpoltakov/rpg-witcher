#include "../include/CBasePlayer.h"
#include <iostream>

CBasePlayer::CBasePlayer(std::string name, float health, int damage, int gold, int level, int exp) : CBaseEntity(name, health, damage), m_iGold(gold), m_iLevel(level), m_iExp(exp)
{
    // empty
}

void CBasePlayer::ShowInventory()
{
    std::cout << m_szName << "'s inventory:" << std::endl;
    std::cout << "Gold: " << m_iGold << std::endl;
    std::cout << "Level: " << m_iLevel << std::endl;
    std::cout << "Exp: " << m_iExp << std::endl;

    if ( m_inventory.size() > 0 )
    {
        for (int i = 0; i < m_inventory.size(); ++i)
        {
            std::cout << "Slot " << i + 1 << ":" << std::endl;
            std::cout << "Item's name: " << m_inventory[i].m_szName << std::endl;
            std::cout << "Item's cost: " << m_inventory[i].m_iCost << std::endl;
            std::cout << "Item's info: " << m_inventory[i].m_szInfo << std::endl;
        }
    }
}

void CBasePlayer::AddItem(CItem item)
{
    m_inventory.push_back(item);
}