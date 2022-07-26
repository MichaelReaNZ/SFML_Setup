#pragma once
#ifndef __RPG_MAP_H__
#define __RPG_MAP_H__

#include "weapon.h"
#include "monster.h"

// This class, CMap, is used to represent or MODEL the game board of either 
// the game world, part of the game world, or a dungeon in the game world in 
// this example we will only have one single CMap object one of CMap's 
// responsibilities is to keep track of the players WORLD POSITION (XY 
// COORD) in doing so we make the CMap object responsible for inputting the 
// users movement input Also, as a game board should know where objects are 
// located within / on top of it, CMap should know where the CMonster 
// objects are. Therefore, the CMap class is responsible for handling enemy 
// encounters.

// Further enhancements would be to define landmarks, or key areas, where 
// you want something to happen.  For example, (2, 3) could contain a 
// dungeon, so if the player moves to (2, 3) the game could describe the 
// dungeon, and ask the user if he wants to enter a town could be another 
// example, with (4, 4) being a weaponsmith, (2, 2) being a tavern, etc.
// Map.h

class CMap
{
public:
   // Constructor.
   CMap();

   // Methods
   int GetPlayerXPos();
   int GetPlayerYPos();
   void MovePlayer();
   CMonster* CheckRandomEncounter();
   void PrintPlayerPos();

private:
   // Data members.
   int m_iPlayerXPos;
   int m_iPlayerYPos;
};

#endif // __RPG_MAP_H__
