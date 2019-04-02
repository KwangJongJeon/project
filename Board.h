#pragma once
#include "Point.h"
#include <iostream>

class Board
{
	private:
		int m_board[20][30];
		
	public:
		Board();
		
		void set_state(Point pos, const int& state);
		int get_state(Point pos);
		
		void mark_to_board(const Point& pos, const int& unit_type = -1); // -1 means the board is EMPTY
};

