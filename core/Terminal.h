#pragma once

#include <iostream> 
#include <string>
#include "Board.h"

class Terminal
{
	private:
		Board _board;
	
	public:
		Terminal(Board& board);
		
		
	
		// void drawMap() const;

		void render(const Board& board);
};