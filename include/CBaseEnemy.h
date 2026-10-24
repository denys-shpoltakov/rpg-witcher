// ==================================================
//
// Заголовочный файл класса вражественной сущности.
// Здесь объявлено наследие класса, конструктор.
//
// ==================================================

#pragma once
#include "CBaseEntity.h"
#include <iostream>

class CBaseEnemy : public CBaseEntity
{
  private:
    // класс врага
    int m_nDamage;
    int m_nGold;

  public:
    CBaseEnemy(std::string name, float health, int damage, int gold);
};