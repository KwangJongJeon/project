#pragma once

#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> // std::time()
#include "Character.h"
#include "Point.h"
#include "Board.h"

class Game
{
	private:
		

		
	public:
		Game()
		{
			run();
		}
	
		void draw_map();	
		void run();
			
};
