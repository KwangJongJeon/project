#pragma once

#include <string>
#include <vector>
#include <typeinfo> // for logging
#include "MovableUnit.h"
/**
Simple databag to hold objects in game.
Can transform itself to printable string form

@author Laurant Jo
**/
class Board final {
public:
	Board(std::vector<MovableUnit*>& units_in, const int& width_in, const int& height);
	// Player& player();
	std::vector<MovableUnit*>& units();
	std::string stringForm() const;
	void set_board(std::vector<MovableUnit*>& units_in);
	
private:
	
	std::vector<MovableUnit*>& _units;	
	int _width;
	int _height;
	// Player _player;
	
	std::vector<std::string> rowStrings() const;
	std::string nthRowString(int) const;
	std::string stringForm(int, int) const;
	std::string unitString(int, int) const;
	std::string playerString(int, int) const;
	std::string stringFor(int x, int y) const;
	MovableUnit findPlayer();
};