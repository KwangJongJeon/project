#pragma once

#include <string>
#include <vector>
#include "Player.h"
#include "Monster.h"

/**
Simple databag to hold objects in game.
Can transform itself to printable string form

@author Laurant Jo
**/
class Board {
public:
	Player* playerPtr();
	std::vector<Monster>& monsters();
	std::string stringForm() const;

	Board(int width, int height, Player* player)
		: width(width), height(height), player(player) 
		{}
	
private:
	const int width;
	const int height;
	const Player* player;
	const std::vector<Monster> monsters;	
}