#pragma once
#include "CBaseEntity.h"
#include <iostream>
#include <vector>

/*
==================== разбив задачи для системы инвентаря =======================

      1. объявить сам вектор где мы будем хранить все наши предметы (инвентарь)
      2. сделать структуру, где мы будем хранить наши характеристики о предметах,
      по типу: название предмета, урон, цена при продаже, какая-то доп. информация
      3.



================================================================================

*/

struct CItem // структура обычного предмета, не оружия, здесь нет урона итд.
{
  std::string m_szName;
  std::string m_szInfo;
  int m_nCost;
};


class CBasePlayer : public CBaseEntity
{
  private:
      int m_nDamage;
      int m_nGold;
      int m_nLevel;
      int m_nExp;
      std::vector<CItem> m_inventory; // <> <== teamplate, это то, что мы будем хранить в нашем векторе, в нашем случае, это
                                      // структура, в которой вся информация о предмете
  public:
    CBasePlayer(std::string name, float health, int damage, int gold, int level, int exp);

    void ShowInventory();
    void AddGold(int amount);
    void AddItem(CItem item);
};