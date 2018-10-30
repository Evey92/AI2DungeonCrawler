#pragma once
#include "Prerequisites.h"
#include "World.h"
#include "App.h"
#include <iostream>
#include <vector>
#include <stack>
#include <map>

class App;

class AppState
{

public:
  AppState() : m_pApp(nullptr) {}

  virtual
    ~AppState() {};
  virtual void
    OnEnter() = 0;
  virtual void
    OnUpdate() = 0;
  virtual void
    OnExit() = 0;

public:
  App* m_pApp;
};

class LogoState : public AppState
{

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();
};

class MenuState : public AppState
{

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();
};

class PlayState : public AppState
{

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};

class PauseState : public AppState {

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};

class GameOverState : public AppState {

public:
  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};

class HelpState : public AppState {

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};

class OptionsState : public AppState {

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();
};

class GameplayState : public AppState {

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};

class GraphicsState : public AppState {

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};

class SoundState : public AppState {

public:

  void
    OnEnter();
  void
    OnUpdate();
  void
    OnExit();

};