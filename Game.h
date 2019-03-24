#pragma once

#include <iostream>
#include "Point.h"
#include "Board.h"

class Game
{
	private:
		
		
	public:
		Game()
		{
			draw_map();
		}
		void draw_map();
		
		
		void check_pos(Point pos);
		
		
};
