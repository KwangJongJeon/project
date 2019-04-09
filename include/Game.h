#pragma once

#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> // std::time()
#include <vector>


#include "UserInput.h"
#include "Terminal.h"


#include "Unit.h"
#include "Point.h"
#include "Board.h"
#include "values.h" // temporary include. after Polymorphism is implemented, this will deleted

#include "Player.h"
#include "Slime.h"

class Game
{
	private:
		int input;
		Player player;
		Board board;
		UserInput userInput;
		Terminal terminal;

		// void draw_map();	
		void getInput(); 
		void update();
		void render();
	public:
		Game(Point& point, int width, int height)
			: player(point), board(width, height, player)	
			{}
	
		void loop()
		{
			render();
			getInput();
			update(); 
		}
};