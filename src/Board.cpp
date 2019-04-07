#include "Board.h"

// class Board {
// private:
// 	const int width;
// 	const int height;
// 	const Player* player;
// 	const std::vector<Monster> monsters;	
// }
using namespace std;

Player* Board::playerPtr() {
	return player;
}

vector<Monster>& Board::monsters() {
	return monsters;
}

string stringForm() const {
	return "test";
}