#include <windows.h>
#include <iostream>
#include <conio.h>
#include "Game.h"
#include "Point.h"
#include "Character.h"
#include "values.h"

using namespace std;



void move_character(int key, Point& cur_pos)
{
	if(key == g_KEY_UP)
	{
		
		//Game::erase(cur_pos);
		//cur_pos.setY(cur_pos.getY() + 1);
		//Game::draw_something(cur_pos);
		
		cout << " "; 
		cur_pos.setY(cur_pos.getY() + 1);
		Point::gotoxy(cur_pos);	
		cout << "¡Ü";
	}
	
	if(key == g_KEY_DOWN)
	{
		cout << " "; 
		cur_pos.setY(cur_pos.getY() - 1);
		Point::gotoxy(cur_pos);	
		cout << "¡Ü";
	}
		
	if(key == g_KEY_RIGHT)
	{
		cout << " "; 
		cur_pos.setX(cur_pos.getX() + 1);
		Point::gotoxy(cur_pos);	
		cout << "¡Ü";
	}
		
	if(key == g_KEY_LEFT)
	{	
		cout << " "; 
		cur_pos.setX(cur_pos.getX() - 1);
		Point::gotoxy(cur_pos);	
		cout << "¡Ü";
	}
}


int main()
{
	Game game;
	// Character player;
	
	Point cur_pos;
	cur_pos.setX(g_init_x);
	cur_pos.setY(g_init_y);
	
	
	int key = 0;
	
	Point::gotoxy(cur_pos);
	// Point::gotoxy(player.get_cur_pos());	
	
	while(true)
	{
		if(kbhit())
		{
			key = getch();
			if(key == 224 || key == 0)
			{
				key = getch();
				Point::gotoxy(cur_pos);
				move_character(key, cur_pos);
				//Point::gotoxy(player.get_cur_pos());	
				//player.move_character(key, player);
			}
		}
	}
}
