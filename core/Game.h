#pragma once

#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> // std::time()
#include <vector>
#include <exception>

#include "values.h"
#include "UserInput.h"
#include "Terminal.h"



#include "Board.h"
#include "MovableUnit.h"
#include "MonsterFactory.h"
#include "MonsterAI.h"
// cp core/*.h include
class Game
{
	private:
		int _input;
		std::vector<MovableUnit*> _units;
		Board _board;
		UserInput _userInput;
	
		MovableUnit _player;
		MovableUnit _monster1;
		MovableUnit _monster2;
		MonsterAI _monster1_AI;
		MonsterAI _monster2_AI;
		
		// Terminal _terminal;

		// void draw_map();	
		void getInput(); 
		void update();
		void render();
	
		std::pair<int, int> convertInputToUnitMove();
		bool victory();

	public:
		Game();

	
		void loop()
		{
			render();
			getInput();
			update();
		}
};