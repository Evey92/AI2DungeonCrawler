#pragma once
#include "Prerequisites.h"

class World
{
public:
  World();
  ~World();
  void createUnit(int x, int y, int idType, int idPlayer);
};

