#include "Game.h"

void Game::draw_map()
{
	using namespace std;
	
	int i;
	
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
	for (i = 0; i < 22; i++)
	{
		cout << "��                                                            ��" << endl;
	}
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
}

/*
void draw_something(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << "��";
}

void erase(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << " ";
}
*/
