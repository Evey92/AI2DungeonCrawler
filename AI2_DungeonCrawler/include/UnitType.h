#pragma once
#include "Prerequisites.h"
#include "GameObject.h"
#include "sqlite3.h"
#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"
#include <string>

using namespace rapidjson;

class UnitType : public GameObject
{
public:
  UnitType();
  ~UnitType();

  void Load(int idType);
  UnitType* callback();

  int m_id;
  float m_baseHP;
  float m_HPmod;
  float m_baseSTR;
  float m_baseDEX;
  float m_baseINT;
  float m_baseDEF;
  std::string m_Name;
  std::string m_spriteFile;
};

