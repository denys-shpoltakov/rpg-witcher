#pragma once
#include "CBaseEntity.h"

class CPlayer : public CBaseEntity
{
  private:
      int m_gold;
      int m_level;
      int m_exp;
  public:
    CPlayer(std::string name, float health, int gold, int level, int exp);

    void showInventory();
    void addGold(int amount);
};