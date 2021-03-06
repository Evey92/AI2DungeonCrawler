#include "pch.h"
#include "App.h"
#include <iostream>

App::App() {

  m_currentState = nullptr;
  m_logoState = new LogoState();
  m_menuState = new MenuState();
  m_playState = new PlayState();
  m_pauseState = new PauseState();
  m_gameOverState = new GameOverState();
  m_helpState = new HelpState();
  m_optionState = new OptionsState();
  m_gameplayState = new GameplayState();
  m_graphicState = new GraphicsState();
  m_soundStae = new SoundState();
  setState(m_logoState);
  m_windowManager.Create();

}

void
App::setState(AppState* pNewState) {

  //Load the logo for the first time.

  if (m_currentState == nullptr) {

    m_stateStack.push(pNewState);
    m_currentState = pNewState;
    m_currentState->m_pApp = this;
    m_currentState->OnEnter();

  }

  //Check if game is paused
  else
  {
    m_currentState->OnExit();
    //delete(m_currentState);
    m_stateStack.push(pNewState);
    m_currentState = m_stateStack.top();
    m_currentState->m_pApp = this;
    m_currentState->OnEnter();
  }
}

void
App::Update()
{
  while (m_windowManager.m_appWindow.isOpen()) {

    while (m_windowManager.m_appWindow.pollEvent(m_windowManager.m_event)) {

      if (m_windowManager.m_event.type == sf::Event::Closed) {
        m_windowManager.m_appWindow.close();
        return;
      }

      else {
        if (m_stateStack.empty()) {
          std::cout << "Stack is empty" << std::endl;
        }
        else {
          m_currentState->OnUpdate();
        }
      }
      m_windowManager.m_appWindow.clear();
      m_windowManager.m_appWindow.draw(m_windowManager.m_Testshape);
      m_windowManager.m_appWindow.draw(m_windowManager.m_sprite);
      m_windowManager.m_appWindow.draw(m_windowManager.m_text);
      m_windowManager.m_appWindow.display();
    }

    m_windowManager.m_appWindow.clear();
    m_windowManager.m_appWindow.draw(m_windowManager.m_Testshape);
    m_windowManager.m_appWindow.draw(m_windowManager.m_sprite);
    m_windowManager.m_appWindow.draw(m_windowManager.m_text);
    m_windowManager.m_appWindow.display();
  }

}