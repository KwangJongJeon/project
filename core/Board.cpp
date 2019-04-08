#include "Board.h"

// class Board {
// public:
// 	Player& player();
// 	std::vector<Monster>& monsters();
// 	std::string stringForm() const;

// 	Board(int width, int height, Player* player)
// 		: width(width), height(height), player(player) 
// 		{}
	
// private:
// 	const int width;
// 	const int height;
// 	const std::vector<Monster> monsters;	
	
// 	Player player;
// }
using namespace std;

Player& Board::getPlayer() {
	return player;
}

vector<Monster>& Board::getMonsters() {
	return monsters;
}

string Board::stringForm() const {
	string result;
	vector<string> rowStrs = rowStrings();
	string ceiling(width + 2, '#');
	result += ceiling;
	result += "\n";
	vector<string>::const_iterator iter = rowStrs.begin();
	
	while(iter != rowStrs.end()) {
		result += "#";
		result += *iter;
		result += "#\n";
	}
	
	result += ceiling;
	return result;
}

vector<string> Board::rowStrings() const {
	vector<string> rowStrings;
	
	for(int y = 0; y < height; ++y) {
		rowStrings.push_back(nthRowString(y));
	}
	
	return rowStrings;
}

string Board::nthRowString(int n) const {
	string result;
	
	for(int x = 0; x < width; ++x) {
		result += stringFor(x, n);
	}
	
	return result;
}

string Board::stringFor(int x, int y) const {
	string result = monsterString(x, y);
	result = playerString(x, y);
	return result;
}

string Board::monsterString(int x, int y) const {
	string result = " ";
	vector<Monster>::const_iterator iter = monsters.begin();
	
	while(iter != mosters.end()) {
		Point point = iter->get_pos();
		if((point.getX() == x) && (point.getY() == y)) {
			result = iter->stringForm();
		}
	}
	
	return result;
}

string Board::playerString(int x, int y) const {
	string result = = " ";
	Point playerPoint = player.get_pos();
	if((playerPoint.getX() == x) && (playerPoint.getY() == y)) {
		result = player.stringForm();
	}
	return result;
}