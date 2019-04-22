#pragma once

#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> // std::time()
#include <vector>

#include "values.h"
#include "UserInput.h"
#include "Terminal.h"


#include "Board.h"
#include "MovableUnit.h"
#include "MonsterFactory.h"
// cp core/*.h include
class Game
{
	private:
		int _input;
		std::vector<MovableUnit*> _units;
		MovableUnit _player;
		Board _board;
		UserInput _userInput;
		// Terminal _terminal;

		// void draw_map();	
		void getInput(); 
		void update();
		void render();
		std::pair<int, int> convertInputToUnitMove();

	public:
		Game();

	
		void loop()
		{
			getInput();
			std::cout << "getInput is completed, update is ready" << std::endl;
			update();
			std::cout << "update is completed, render is ready" << std::endl;

			render();
			std::cout << "render is completed" << std::endl;
		}
};