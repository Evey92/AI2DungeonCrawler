#pragma once
#include "GameObject.h"
#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"
#include <string>

using namespace rapidjson;

class UnitType : public GameObject
{
public:
  UnitType();
  ~UnitType();
  
  int m_id;
  int m_Level;
  std::string sName;
  float m_baseHP;
  float m_HPModifier;
  float m_STR;
  float m_DEX;
  float m_INT;
  float m_DEF;
  float m_abilityMod;
  float iEXP;
  std::string spriteFile;

};

