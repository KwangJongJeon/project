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
		Board board;
		UserInput userInput;
		Terminal terminal;

		
	public:
		Game()
		{
			UserInput userInput;
		}
	
		void loop()
		{
			render();
			getInput();
			update(); 
		}
	
		// void draw_map();	
		void getInput(); 
		void update(input);
		void render();
};