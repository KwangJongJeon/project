#include <windows.h>
#include <iostream>
#include <conio.h>
#include "Game.h"
#include "Point.h"

using namespace std;

const int g_KEY_UP = 80;
const int g_KEY_LEFT = 75;
const int g_KEY_RIGHT = 77;
const int g_KEY_DOWN = 72;
const int g_init_x = 2;
const int g_init_y = 15;



void move_character(int key, Point& cur_pos)
{
	if(key == g_KEY_UP)
	{
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
	Point cur_pos(g_init_x, g_init_y);
	
	int key = 0;
	
	Point::gotoxy(cur_pos);	
	
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
			}
		}
	}
	/*
	while(true)
	{
		

		
		if(kbhit())
		{
			key = getch();
			if(key == 224 || key == 0) 
				{
				key = getch();
				switch(key)
				{
					case 72:
						cout << "INSERTED â†‘" << endl;
						break;
					case 75:
						cout << "INSERTED â†" << endl;
						break;
					case 77:
						cout << "INSERTED â†’" << endl;
						break;
					case 80:
						cout << "INSERTED â†“" << endl;
						break; 
				}
			}
		}
	}
	*/
}
