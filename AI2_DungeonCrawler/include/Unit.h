#pragma once
#include "Prerequisites.h"
#include "Item.h"
#include "Weapon.h"
#include "GameObject.h"
#include <string>
#include <vector>

class Unit : public GameObject
{
public:
  Unit() = default;
  Unit(Unit* unit);
  ~Unit();

  void doDamage(Weapon* weapon);
  void setEnemy(Unit* pEnemy);
  void attack();

  int m_idType;
  int m_idPlayer;
  int m_Level;
  float m_x;
  float m_y;
  float m_HP;
  float m_HPmod;
  float m_STR;
  float m_DEX;
  float m_INT;
  float m_DEF;
  float m_EXP;
  std::string m_Name;
  std::string m_spriteFile;
  std::vector<Item*> m_inventory;
  Unit* m_pEnemy;
  Weapon* m_activeWeapon;
  std::vector<Weapon*> weaponList;
};

