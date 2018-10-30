#pragma once
#include "Item.h"
#include <string>
#include <vector>

class Unit
{
public:
  Unit();
  ~Unit();

  std::vector<Item*> inventory;
};

