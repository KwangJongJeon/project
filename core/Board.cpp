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
	string result;
	vector<string> rowStrs = rowStrings();
	
	string ceiling(_width + 2, '#');
	result += ceiling;
	result += "\n";
	auto iter = rowStrs.begin();
	
	while(iter != rowStrs.end()) {
		result += "#";
		result += *iter;
		result += "#\n";
		++iter;
	}
	
	result += ceiling;
	return result;
}


void Board::set_board(std::vector<MovableUnit*>& units_in) {
	_units = units_in;
	
	// for(auto &ele : _units) {
	// 	cout << *ele << endl; 
	// }
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



string Board::unitString(int x, int y) const {
	string result = " ";
	for(auto &ele : _units) {
		auto pos = ele->get_pos();
		if((pos.first == x) && (pos.second == y)) {
			// cout << *ele << endl;
			result = ele->get_string_form();
		}
	}
	return result;
}


std::pair<int, int> Board::get_board() {
	std::pair<int, int> board = make_pair(_width, _height);
	return board;
}
