#pragma once
#include "Vector2.h"

class GameObject
{
public:
  GameObject() = default;
  ~GameObject() {}

  void setPosition(Vector2 pos);
  void setPosition(int x, int y);

  Vector2 getPosition();

  int m_ID;
  Vector2 m_position;
  Vector2 m_size;
};

