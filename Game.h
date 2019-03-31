#pragma once

#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> // std::time()
#include "Unit.h"
#include "Point.h"
#include "Board.h"
#include "values.h" // temporary include. after Polymorphism is implemented, this will deleted

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
