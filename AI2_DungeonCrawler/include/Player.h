#pragma once
#include "Prerequisites.h"
#include <string>

class Player
{
public:
  Player();
  ~Player();
  
  int m_id;
  std::string name;
  std::string iconFileName;
  sf::Color color;
  int money;

};

