#include "Game.h"

void Game::draw_map()
{
	using namespace std;
	
	int i;
	
	cout << "ΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜ" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << "ΆΜ                                                        ΆΜ" << endl;
	}
	cout << "ΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜ" << endl;
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
