#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

const int g_KEY_UP = 80;
const int g_KEY_LEFT = 75;
const int g_KEY_RIGHT = 77;
const int g_KEY_DOWN = 72;
	
void gotoxy(int x, int y)
{
	COORD Pos = {x, y}; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


void move_character(int key, int& x, int& y)
{
	if(key == g_KEY_UP)
	{
		cout << " ";
		y += 1;
		gotoxy(x, y);
		cout << "@";
	}
	
	if(key == g_KEY_DOWN)
	{
		cout << " "; 
		y -= 1;
		gotoxy(x, y);
		cout << "@";
	}
		
	if(key == g_KEY_RIGHT)
	{
		cout << " "; 
		x += 1;
		gotoxy(x, y);
		cout << "@";
	}
		
	if(key == g_KEY_LEFT)
	{	
		cout << " "; 
		x -= 1;
		gotoxy(x, y);
		cout << "@";
	}
}


int main()
{
	int key = 0;

	
	int x = 10; 
	int y = 5;
	
	gotoxy(x, y);
	
	while(true)
	{
		if(kbhit())
		{
			key = getch();
			if(key == 224 || key == 0)
			{
				key = getch();
				gotoxy(x, y);
				move_character(key, x, y);
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
						cout << "INSERTED ↑" << endl;
						break;
					case 75:
						cout << "INSERTED ←" << endl;
						break;
					case 77:
						cout << "INSERTED →" << endl;
						break;
					case 80:
						cout << "INSERTED ↓" << endl;
						break; 
				}
			}
		}
	}
	*/
}
