#include <conio.h>
#include <windows.h>
#include "Point.h"


void Point::gotoxy(int x, int y)
{
	COORD Pos = {x, y}; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Point::gotoxy(Point pos)
{
	gotoxy(pos.getX(), pos.getY());
}
