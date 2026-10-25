// ==================================================
//
// Файл реализации класса вражественной сущности.
// Здесь реализован конструктор, а также могут быть
// добавлены методы.
//
// ==================================================

#include "../include/CBaseEnemy.h"
#include <iostream>

CBaseEnemy::CBaseEnemy(std::string name, float health, int damage, int gold) : CBaseEntity(name, health, damage), m_nGold(gold)
{
    // empty 
}

// no methods (not sure)