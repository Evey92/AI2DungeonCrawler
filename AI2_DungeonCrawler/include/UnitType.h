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
  
  int id;
  int iLevel;
  std::string sName;
  float iHP;
  float iSTR;
  float iDEF;
  float iSPD;
  float iEXP;
  std::string spriteFile;

};

