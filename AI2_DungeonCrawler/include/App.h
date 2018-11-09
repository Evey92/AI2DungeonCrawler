#pragma once
#include "Prerequisites.h"
#include "AppState.h"
#include "Window.h"

class AppState;
class LogoState;
class MenuState;
class PlayState;
class PauseState;
class GameOverState;
class HelpState;
class OptionsState;
class GameplayState;
class GraphicsState;
class SoundState;


class App
{
 public:

  App();
  ~App() {};

  void
  Update();

  void
  setState(AppState* pNewState);

  bool m_isPaused = false;
  Window m_windowManager;
  std::stack<AppState*> m_stateStack;
  std::vector<sf::Drawable*> m_vDrawableObjects;
  AppState* m_currentState;
  LogoState* m_logoState;
  MenuState* m_menuState;
  PlayState* m_playState;
  PauseState* m_pauseState;
  GameOverState* m_gameOverState;
  HelpState* m_helpState;
  OptionsState* m_optionState;
  GameplayState* m_gameplayState;
  GraphicsState* m_graphicState;
  SoundState* m_soundStae;
  World gameWorld;
};