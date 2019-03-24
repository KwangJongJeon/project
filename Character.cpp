#include "Character.h"




void Character::draw_something(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << "¡Ü";
}


void Character::erase(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << " ";
}


void Character::move_character(const int key)
{
	using namespace std;
	
	if(key == g_KEY_UP)
	{
		erase(m_cur_pos);
		m_cur_pos.setY(m_cur_pos.getY() + 1);
		cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
		m_board.get_state(m_cur_pos);
		//mark_pos_to_board(m_cur_pos);
		draw_something(m_cur_pos);
		
	}
	
	if(key == g_KEY_DOWN)
	{
		erase(m_cur_pos);
		m_cur_pos.setY(m_cur_pos.getY() - 1);
		cout << "   x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY() << endl;
		m_board.get_state(m_cur_pos);
		//mark_pos_to_board(m_cur_pos);
		draw_something(m_cur_pos);
	}
		
	if(key == g_KEY_RIGHT)
	{
		erase(m_cur_pos);
		m_cur_pos.setX(m_cur_pos.getX() + 1);
		cout << "   x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
		m_board.get_state(m_cur_pos);
		//mark_pos_to_board(m_cur_pos);
		draw_something(m_cur_pos);
	}
		
	if(key == g_KEY_LEFT)
	{	
		erase(m_cur_pos);
		m_cur_pos.setX(m_cur_pos.getX() - 1);
		cout << "   x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
		m_board.get_state(m_cur_pos);
		//mark_pos_to_board(m_cur_pos);
		draw_something(m_cur_pos);
	}
};

void Character::mark_pos_to_board(Point pos)
{
	m_board.set_state(pos, 1); // if state is 1, it's player.
}

