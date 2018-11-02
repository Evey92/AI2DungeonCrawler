#pragma once
#include "Prerequisites.h"
#include "UnitType.h"
#include "EnemyType.h"
#include "Unit.h"
#include "Player.h"


class World
{
 public:
  World();
  ~World();
  
  /*
  * @brief: Funcion para crear una unidad en el juego
  * @param: la posicion en el mundo enfuncionde X y Y,
  * su ID de tipo, y el ID del personaje al que pertenece
  */

  Unit
  createUnit(float x, float y, int idType, int idPlayer);
  
  /*
  * @brief: Funcion para crear una unidad en el juego
  * @param: la posicion en el mundo enfuncionde X y Y,
  * su ID de tipo, y el ID del personaje al que pertenece
  */
  Unit
  createUnit(Unit* newUnit, float posX, float posY, int idPlayer);

  /*
  * @brief: Funcion para crear un tipo de unidad en el juego
  * @param: el id de tipo.
  */
  void
  createUnitType(int id_type);

  /*
  * @brief: Funcion para crear un tipo de enemigo en el juego
  * @param: el id de tipo.
  */
  void
  createEnemyType(int id_type);

  /*
  * @brief: Funcion para crear un jugador/una cuenta 
  * @param: el id del jugador.
  */
  Player 
  createPlayer(int id_Player);
  
  /*
  * @brief: Funcion para registrar una funcion LUA
  * @param: La funcion LUA.
  */
  void 
  registerLuaFunction(/*Function*/);
  
  /*
  * @brief: Funcion para registrar una funcion LUA
  * @param: La funcion LUA.
  */
  UnitType* 
  GetUnitType(int id_unitType);

  /*
  * @brief: Funcion para registrar una funcion LUA
  * @param: La funcion LUA.
  */
  Unit*
  GetUnit(int id_unit);

  std::vector<Unit*> GetUnitsInArea();

  std::vector<UnitType*> unitTypeList;
  std::vector<Unit*> unitsList;
  std::vector<Player*> playerList;

};

