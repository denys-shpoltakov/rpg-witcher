#include "../include/CBaseEntity.h"
#include <iostream>

CBaseEntity::CBaseEntity(std::string name, float health, int damage)
{
    m_szName     = name;
    m_flHealth   = health;
    m_iDamage    = damage;
}

// Getters

std::string CBaseEntity::GetEntityName() // :: <-- scope operator
{
    return m_szName;
}

float CBaseEntity::GetEntityHealth()  // :: <-- scope operator
{
    return m_flHealth;
}

// Method to attack

void CBaseEntity::Attack(CBaseEntity& target)
{
    target.TakeDamage(m_iDamage);
}

// Method to get damage

void CBaseEntity::TakeDamage(int damage)
{
    m_flHealth -= damage;
    std::cout << m_szName << " got " << damage << " damage!" << std::endl;
}