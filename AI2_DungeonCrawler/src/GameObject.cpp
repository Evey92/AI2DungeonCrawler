#include "GameObject.h"

void 
GameObject::setPosition(Vector2 pos) {
  m_position = pos;
}

void
GameObject::setPosition(int x, int y) {
  m_position.x = x;
  m_position.y = y;
}

Vector2
GameObject::getPosition() {
  return m_position;
}