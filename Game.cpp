#include "Game.h"

void Game::draw_map()
{
	using namespace std;
	
	int i;
	
	cout << "ΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜ" << endl;
	for (i = 0; i < 22; i++)
	{
		cout << "ΆΜ                                                            ΆΜ" << endl;
	}
	cout << "ΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜ" << endl;
}

/*
void draw_something(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << "΅ά";
}

void erase(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << " ";
}
*/
