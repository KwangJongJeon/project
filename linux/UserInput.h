#pragma once

class UserInput
{
	private:
		int key; 
	
	public:
		UserInput() {}

	    static const int UP = 80; 
	    static const int LEFT = 75;
	    static const int RIGHT = 77;
	    static const int DOWN = 72;

		int getInput();
};