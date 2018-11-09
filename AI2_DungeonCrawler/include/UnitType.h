#pragma once
#include "Prerequisites.h"
#include "GameObject.h"
#include "sqlite3.h"
#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"
#include <string>
#include <sstream>

using namespace rapidjson;

class UnitType : public GameObject
{
public:
  UnitType() = default;
  ~UnitType() {};

  void Load(int idType);
  /*static UnitType* callback() {
    int i;
    fprintf(stderr, "%s: ", (const char*)data);

    for (i = 0; i < argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");
    return 0;
  }*/
  
  int m_id;
  float m_baseHP;
  float m_HPmod;
  float m_baseSTR;
  float m_baseDEX;
  float m_baseINT;
  float m_baseDEF;
  std::string m_Name;
  //m_spriteFile;
};


