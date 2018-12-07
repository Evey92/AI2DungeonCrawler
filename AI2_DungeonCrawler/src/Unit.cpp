#include "pch.h"
#include "Unit.h"

Unit::Unit(const Unit& unit)
{
  m_idType = unit.m_idType;
  m_HP = unit.m_HP;
  m_HPmod = unit.m_HPmod;
  m_STR = unit.m_STR;
  m_DEX = unit.m_DEX;
  m_INT = unit.m_INT;
  m_DEF = unit.m_DEF;
  m_EXP = unit.m_EXP;

}

Unit::~Unit()
{
}

void
Unit::doDamage(Weapon* weapon) {

  m_HP -= weapon->m_damage;

}

void
Unit::setEnemy(Unit* pEnemy)
{
  m_pEnemy = pEnemy;
}
