// #pragma once

// #include <string>
// #include <vector>
// #include "Player.h"
// #include "Monster.h"

// /**
// Simple databag to hold objects in game.
// Can transform itself to printable string form

// @author Laurant Jo
// **/
// class Board final {
// public:
// 	Player& player();
// 	std::vector<Monster>& monsters();
// 	std::string stringForm() const;

// 	Board(int width, int height, Player& player);
	
// private:
// 	const int _width;
// 	const int _height;
// 	std::vector<Monster> _monsters;	
// 	Player _player;
	
// 	std::vector<std::string> rowStrings() const;
// 	std::string nthRowString(int) const;
// 	std::string stringFor(int, int) const;
// 	std::string monsterString(int, int) const;
// 	std::string playerString(int, int) const;
// };