#pragma once

#include <iostream>
#include "Game.h"
#include "Point.h"
#include "Board.h"
#include "values.h"


class Character
{
	private:
		Point m_cur_pos;
		Board* m_board;
	
	public:
		Character(Point ref_pos = Point(g_init_x, g_init_y), Board *board = new Board)
		: m_cur_pos(ref_pos), m_board(board) {}
	
		Point get_cur_pos(){ return m_cur_pos;}
		void set_cur_pos(Point ref_pos);
		
		void draw_something(Point ref_pos);
		void erase(Point ref_pos);
		void move_character(const int key);
		
		void mark_default(Point pos);
		void mark_unit(const Point &pos, const int& unit_type = -1 ); // -1 means the board pos is EMPTY
		
		
		bool check_valid_pos();
		
		~Character()
		{
			delete m_board;
			m_board = 0;
		}
};
