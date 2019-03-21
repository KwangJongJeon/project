#include "Character.h"

void Character::draw_something(Point& ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << "¡Ü";
}

void Character::erase(Point& ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << " ";
}

/*
void move_character(int key)
{
	using namespace std;
	
	if(key == g_KEY_UP)
	{
		/*
		Game::erase(cur_pos);
		cur_pos.setY(cur_pos.getY() + 1);
		Game::draw_something(cur_pos);
		
		cout << " "; 
		m_cur_pos.setY(m_cur_pos.getY() + 1);
		Point::gotoxy(m_cur_pos);	
		cout << "¡Ü";
	}
	
	if(key == g_KEY_DOWN)
	{
		cout << " "; 
		m_cur_pos.setY(m_cur_pos.getY() - 1);
		Point::gotoxy(m_cur_pos);	
		cout << "¡Ü";
	}
		
	if(key == g_KEY_RIGHT)
	{
		cout << " "; 
		m_cur_pos.setX(m_cur_pos.getX() + 1);
		Point::gotoxy(m_cur_pos);	
		cout << "¡Ü";
	}
		
	if(key == g_KEY_LEFT)
	{	
		cout << " "; 
		m_cur_pos.setX(m_cur_pos.getX() - 1);
		Point::gotoxy(m_cur_pos);	
		cout << "¡Ü";
	}
};
*/

