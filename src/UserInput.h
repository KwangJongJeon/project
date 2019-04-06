#pragma once

#include "Point.h"
#include <conio.h>
#include <windows.h>

class UserInput
{
	private:
		int key; 
	
	
	public:
		UserInput() {}

		const int UP = 80; 
		const int LEFT = 75;
		const int RIGHT = 77;
		const int DOWN = 72;
		// TODO: 
		// Inventory, ..., etc.



		void getInput();

};