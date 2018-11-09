#pragma once
#include "Prerequisites.h"
#include <string>

class Player
{
public:
  Player() = default;
  ~Player() {};
  
  int m_id;
  std::string name;
  sf::Sprite iconFileName;
  sf::Color color;
  int money;

};

