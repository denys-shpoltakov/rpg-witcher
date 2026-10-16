// ==================================================
//
// Заголовочный файл класса вражественной сущности.
// Здесь объявлено наследие класса, конструктор.
//
// ==================================================

#pragma once
#include "CBaseEntity.h"
#include <iostream>

class CEnemy : public CBaseEntity
{
  private:
    // класс врага
    std::string m_name;
    float m_health;
    int m_gold;

  public:
    CEnemy(std::string name, float health, int gold);
};