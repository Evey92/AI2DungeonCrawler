#pragma once
#include "Prerequisites.h"
#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"
#include "UnitType.h"

using namespace rapidjson;


  class EnemyType : public UnitType
  {
  public:
    EnemyType() = default;
    ~EnemyType() {};

    int m_id;
    std::string m_Name;
    int m_level;
    double m_expToGive;
    double m_HP;
    double m_baseSTR;
    double m_baseDEX;
    double m_baseINT;
    double m_baseDEF;
    Document doc;

  };
