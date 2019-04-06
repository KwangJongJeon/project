#include "UserInput.h"

int UserInput::getInput()
{
	int key = 0;
	
	if(kbhit())
	{
		key = getch();
	
		if(key == 224 || key == 0)
		{
			key = getch();
		}

		return UserInput.getKey();
	}
}

/**
class Game {
public:
	void loop() {
		render();
		getInput()
		update()
	}
private:
	int key; 
	UserInput userInput;
	
	
	void getInput() {
		key = userInput.getInput() 
    }
    
	void update() {
		updateUser(key);
		doComputerUpdateThing();
        input가지고 지지고 복고해서 게임 상태 업데이트
            당연히 Board에도 반영되어있어야함
    }
	
	
}
**/