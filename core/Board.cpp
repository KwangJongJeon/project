#include "Board.h"

using namespace std;

Board::Board(int width, int height, Player& player)
	: _width(width), _height(height), _player(player) {}

Player& Board::player() {
	return _player;
}

vector<Monster>& Board::monsters() {
	return _monsters;
}

string Board::stringForm() const {
	string result;
	vector<string> rowStrs = rowStrings();
	string ceiling(_width + 2, '#');
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
	
	for(int y = 0; y < _height; ++y) {
		rowStrings.push_back(nthRowString(y));
	}
	
	return rowStrings;
}

string Board::nthRowString(int n) const {
	string result;
	
	for(int x = 0; x < _width; ++x) {
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
	vector<Monster>::const_iterator iter = _monsters.begin();
	
	while(iter != _monsters.end()) {
		Point point = iter->get_pos();
		if((point.getX() == x) && (point.getY() == y)) {
			result = iter->stringForm();
		}
	}
	
	return result;
}

string Board::playerString(int x, int y) const {
	string result = " ";
	Point playerPoint = _player.get_pos();
	if((playerPoint.getX() == x) && (playerPoint.getY() == y)) {
		result = _player.stringForm();
	}
	return result;
}