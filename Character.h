#pragma once
#include <iostream>
#include "Point.h"
#include "values.h"

class Character
{
	private:
		Point m_cur_pos;
	
	public:
		Character(Point cur_pos = Point(g_init_x, g_init_y))
		: m_cur_pos(cur_pos) {}
		
		Point get_cur_pos(){ return m_cur_pos;}
		void set_cur_pos();
		
		void draw_something(Point& ref_pos);
		void erase(Point& ref_pos);
		// void move_character(int key = 0, Character character);
};
