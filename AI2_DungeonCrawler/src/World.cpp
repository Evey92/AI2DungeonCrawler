#include "pch.h"
#include "World.h"
#include "EnemyType.h"

World::World()
{
}


World::~World()
{
}

Unit
World::createUnit(float x, float y, int idType, int idPlayer) {
  Unit newUnit;
  UnitType* unitType = GetUnitType(idType);

  newUnit.m_Level = 0;
  newUnit.m_x = x;
  newUnit.m_y = y;
  newUnit.m_idPlayer = idPlayer;
  newUnit.m_STR = unitType->m_baseSTR;
  newUnit.m_DEX = unitType->m_baseDEX;
  newUnit.m_INT = unitType->m_baseINT;
  newUnit.m_DEF = unitType->m_baseDEF;
  newUnit.m_HPmod = unitType->m_HPmod;
  newUnit.m_EXP = 0;
  newUnit.m_Name = unitType->m_Name;
  //newUnit.m_spriteFile = unitType->m_spriteFile;

  return newUnit;
}

Unit
World::createUnit(Unit* copyUnit, float posX, float posY, int idPlayer)
{
  Unit newUnit(copyUnit);
  newUnit.m_Level = 0;
  newUnit.m_EXP = 0;
  newUnit.m_x = posX;
  newUnit.m_y = posY;
  newUnit.m_idPlayer = idPlayer;
  return newUnit;
}

void
World::createUnitType(int id_Type) {
  UnitType newType;
  newType.m_id = id_Type;
  /*
  Recieve data from user input: 

  newType.m_baseHP;
  newType.m_HPmod;
  newType.m_DEF;
  newType.baseSTR;
  newType.m_baseDEX;
  newType.m_baseINT;
  newType.m_baseDEF;
  sf::Sprite unitSprite;

  store it in World's vector.
  */
}

void
World::createEnemyType(int id_type) {
  EnemyType newType;
  newType.m_id = id_type;
}

Player
World::createPlayer(int idPlayer) {

  Player newPlayer;

  newPlayer.m_id = idPlayer;
  newPlayer.money = 0;

  return newPlayer;
}

UnitType*
World::GetUnitType(int id_unitType) {
  return unitTypeList[id_unitType];
}

Unit*
World::GetUnit(int id_unit) {
  return unitsList[id_unit];
}