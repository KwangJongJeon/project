#include "Board.h"

using namespace std;

Board::Board(vector<MovableUnit*>& units_in, const int& width_in, const int& height_in) 
	:_units(units_in), _width(10), _height(10)
{}

vector<MovableUnit*>& Board::units() {
	return _units;
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

//Returns string representation for position x, y
string Board::stringFor(int x, int y) const {
	string result = unitString(x, y);
	
	return result;
}

// string Board::playerString(int x, int y) const {
// 	string result = " ";
// 	auto player = findPlayer();
// 	auto playerPoint = player.get_pos();
// 	if((playerPoint.first == x) && (playerPoint.second == y)) {
// 		result = player.get_string_form();
// 	}
// 	return result;
// }


string Board::unitString(int x, int y) const {
	string result = " ";
		
	for(auto &ele : _units) {
		auto pos = ele->get_pos();
		if((pos.first == x) && (pos.second == y)) {
			result = ele->get_string_form();
		}
		
		return result;
	}
	// while(iter != _monsters.end()) {
	// 	Point point = iter->get_pos();
	// 	if((point.getX() == x) && (point.getY() == y)) {
	// 		result = iter->stringForm();
	// 	}
	// }
	
	// return result;
}

// string Board::monsterString(int x, int y) const {
// 	string result = " ";
// 	vector<Monster>::const_iterator iter = _monsters.begin();
	
// 	while(iter != _monsters.end()) {
// 		Point point = iter->get_pos();
// 		if((point.getX() == x) && (point.getY() == y)) {
// 			result = iter->stringForm();
// 		}
// 	}
	
// 	return result;
// }

// string Board::playerString(int x, int y) const {
// 	string result = " ";
// 	auto player = findPlayer();
// 	auto playerPoint = player.get_pos();
// 	if((playerPoint.first == x) && (playerPoint.second == y)) {
// 		result = player.get_string_form();
// 	}
// 	return result;
// }
