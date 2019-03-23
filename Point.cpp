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

Point Point::GetScrPosFromCurPos(Point &pos) // 배열좌표를 화면좌표로 가져온다.
{
	pos.setX(2 * pos.m_x + 2);
	// pos.setY((-1) * pos.m_y + 20);
	pos.setY((-1) * pos.m_y + 20);
}
