#include "UserInput.h"

int UserInput::getInput()
{
	int key;
	while(true){
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
}