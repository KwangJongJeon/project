#include <windows.h>
#include <iostream>
#include <conio.h>
#include "Game.h"
#include "Point.h"
#include "Character.h"
#include "values.h"

using namespace std;


int main()
{
	Game game;
	Character player;

	int key = 0;
	

	Point::gotoxy(player.get_cur_pos());	
	player.draw_something(player.get_cur_pos());
	
	while(true)
	{
		if(kbhit())
		{
			key = getch();
			if(key == 224 || key == 0)
			{
				key = getch();
				
				Point::gotoxy(player.get_cur_pos());	
				player.move_character(key);			
			}
		}
	}
}
