// ==================================================
//
// Файл реализации класса вражественной сущности.
// Здесь реализован конструктор, а также могут быть
// добавлены методы.
//
// ==================================================

#include "CEnemy.h"
#include <iostream>

CEnemy::CEnemy(std::string name, float health, int gold) : CBaseEntity(name, health), m_gold(gold)
{
    // empty 
}

// no methods (not sure)