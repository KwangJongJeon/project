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
	Player& player();
	std::vector<Monster>& monsters();
	std::string stringForm() const;

	Board(int width, int height, Player* player)
		: width(width), height(height), player(player) 
		{}
	
private:
	const int width;
	const int height;
	const std::vector<Monster> monsters;
	
	std::string nthRowString(int n) const;
	std::vector<std::string> rowStrings() const; 
	std::string stringFor(int x, int y) const;
	std::string monsterString(int x, int y) const;
	
	Player player;
}