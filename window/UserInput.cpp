#include "UserInput.h"

int UserInput::getInput()
{
	while(true)
	{
		if(kbhit()) 
		{
			key = getch();
			
			if(key == 224 || key == 0)
			{
				key = getch();
				return key;
			}
			else
			{
				continue;
			}
		}
	}
}
