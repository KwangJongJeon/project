#include <iostream>
#include "Board.h"

using namespace std;

Board::Board(vector<MovableUnit*>& units_in, const int& width_in, const int& height_in) 
	:_units(units_in), _width(10), _height(10)
{}

vector<MovableUnit*>& Board::units() {
	return _units;
}

string Board::stringForm() const {
	cout << "stringForm called" << endl;
	string result;
	vector<string> rowStrs = rowStrings();
	//여기가 문제네 여기부터가 망함
	//테두리 만드는 부분인데
	
    //버리자 zzzzzzzzzzz
	string ceiling(_width + 2, '#');
	result += ceiling;
	result += "\n";
	cout << "ceiling done" << endl;
	auto iter = rowStrs.begin();
	
	while(iter != rowStrs.end()) {
		result += "#";
		result += *iter;
		result += "#\n";
		++iter;
	}
	
	result += ceiling;
	cout << "stringForm done" << endl;
	return result;
}

vector<string> Board::rowStrings() const {
	cout << "rowStrings called" << endl;
	vector<string> rowStrings;
	
	for(int y = 0; y < _height; ++y) {
		rowStrings.push_back(nthRowString(y));
	}
	cout << "rowStrings done" << endl;
	return rowStrings;
}

string Board::nthRowString(int n) const {
	cout << "nthRowString is called" << endl;

	string result;
	
	for(int x = 0; x < _width; ++x) {
		result += stringFor(x, n);
	}
	cout << "nthRowString is completed" << endl;
	return result;
}

//Returns string representation for position x, y
string Board::stringFor(int x, int y) const {
	cout << "StringFor is called" << endl;

	string result = unitString(x, y);
	cout << "StringFor is completed" << endl;
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
	cout << "unitString is called" << endl;
	string result = " ";
		
	for(auto &ele : _units) {
		auto pos = ele->get_pos();
		if((pos.first == x) && (pos.second == y)) {
			result = ele->get_string_form();
		}
		
		return result;
	}
	cout << "unitString is completed" << endl;
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
