#pragma once
#include "AnimRect.h"

enum ANIMSTATE
{
  IDLE = 0,
  MOVE,
  DEAD,
  ATTACK,
  NUM_ATTACKS,
};

enum DIRECTION
{
  N = 0,
  NW = 1,
  W = 2,
  SW = 3,
  S = 4,
  SE = SW,
  E = W,
  NE = NW,
  NUM_DIR = 5,
};

struct Animation
{
  AnimRect m_imgFrame[NUM_ATTACKS][NUM_DIR][15];
};