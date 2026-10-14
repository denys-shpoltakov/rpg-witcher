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
  std::string m_name;
  std::string m_info;
  int m_cost;
};
class CPlayer : public CBaseEntity
{
  private:
      int m_gold;
      int m_level;
      int m_exp;
      std::vector<CItem> m_inventory; // <> <== teamplate, это то, что мы будем хранить в нашем векторе, в нашем случае, это
                                      // структура, в которой вся информация о предмете
  public:
    CPlayer(std::string name, float health, int gold, int level, int exp);

    void showInventory();
    void addGold(int amount);
    void addItem(CItem item);
};