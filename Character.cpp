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
	
	if(key == g_KEY_UP) // move up
	{
		m_cur_pos.setY(m_cur_pos.getY() + 1);
	
		if(check_valid_pos())
		{
			m_cur_pos.setY(m_cur_pos.getY() - 1);
			erase(m_cur_pos);
			
			//cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			// m_board.get_state(m_cur_pos);
			//mark_pos_to_board(m_cur_pos);
			
			m_cur_pos.setY(m_cur_pos.getY() + 1);
			draw_something(m_cur_pos);
		}
		else
		{
			m_cur_pos.setY(m_cur_pos.getY() - 1);
		}
		
	}
	
	if(key == g_KEY_DOWN) // move down 
	{
		m_cur_pos.setY(m_cur_pos.getY() - 1);
	
		if(check_valid_pos())
		{
			m_cur_pos.setY(m_cur_pos.getY() + 1);
			erase(m_cur_pos);
			
			// cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			// m_board.get_state(m_cur_pos);
			//mark_pos_to_board(m_cur_pos);
			
			m_cur_pos.setY(m_cur_pos.getY() - 1);
			draw_something(m_cur_pos);
		}
		else
		{
			m_cur_pos.setY(m_cur_pos.getY() + 1);
		}	
	}
		
	if(key == g_KEY_RIGHT) // move right
	{
		m_cur_pos.setX(m_cur_pos.getX() + 1);
	
		if(check_valid_pos())
		{
			m_cur_pos.setX(m_cur_pos.getX() - 1);
			erase(m_cur_pos);
			
			// cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			// m_board.get_state(m_cur_pos);
			// mark_pos_to_board(m_cur_pos);
			
			m_cur_pos.setX(m_cur_pos.getX() + 1);
			draw_something(m_cur_pos);
		}
		else
		{
			m_cur_pos.setX(m_cur_pos.getX() - 1);
		}
	}
		
	if(key == g_KEY_LEFT) // move left
	{	
		m_cur_pos.setX(m_cur_pos.getX() - 1);
	
		if(check_valid_pos())
		{
			m_cur_pos.setX(m_cur_pos.getX() + 1);
			erase(m_cur_pos);
			
			// cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			//m_board.get_state(m_cur_pos);
			//mark_pos_to_board(m_cur_pos);
			
			m_cur_pos.setX(m_cur_pos.getX() - 1);
			draw_something(m_cur_pos);
		}
		else
		{
			m_cur_pos.setX(m_cur_pos.getX() + 1);
		}
	}
};


/*
void Character::mark_pos_to_board(Point pos)
{
	m_board.set_state(pos, 1); // if state is 1, it's player.
}
*/

bool Character::check_valid_pos()
{
	if(m_cur_pos.getX() < 0 || m_cur_pos.getX() > 29)
	{
		return false;
	}
	
	
	if(m_cur_pos.getY() < 0 || m_cur_pos.getY() > 19)
	{
		return false;
	}		
	
	return true;
}
