#include "Unit.h"

void Unit::attack(Unit& enemy_unit)
{	
	if(dodge()) 
	{
		return; 
	}
	else if(critical_hit())
	{
		enemy_unit.m_hp - 3*( m_ATK - enemy_unit.m_DEF );
	}
	else
	{
		enemy_unit.m_hp - ( m_ATK - enemy_unit.m_DEF );
	}
	
	// need implement after combat condition 
}


bool Unit::dodge()
{
	if(rand() % 100 < m_dodge_percentage)
		return true; 
	
	return false;
}


bool Unit::critical_hit()
{
	if(rand() % 100 < m_critical_percentage)
		return true; 
	
	return false;
}


void Unit::level_up()
{
	if(m_EXP >= 100)
	{
		for(int count = 0; count < 5; ++count)
		{
			switch(rand() % 4)	// randomly rise player's status.
			{
				case 0:
					set_STR(m_STR + 1);
					break;
				case 1:
					set_INT(m_INT + 1);
					break;
				case 2:
					set_DEX(m_DEX + 1);
					break;
				case 3: 
					set_CON(m_CON + 1);
					break;
				case 4:
					set_LUK(m_LUK + 1);
					break;
			}
		}
		
		set_status();
		
		m_level += 1;
	}
}


void Unit::set_status()
{
	m_max_hp +=  m_CON * 5;
	m_hp = m_max_hp;
	
	m_max_mp += m_INT * 5;
	m_mp = m_max_mp;
	
	m_ATK += m_STR * 3;
	m_DEF += m_CON * 1;
	
	m_critical_percentage += 0.8 * m_LUK;
	m_dodge_percentage += 1.0 * m_DEX;
}





void Unit::draw_something(Point ref_pos, const int& unit_type)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	m_board->mark_to_board(m_cur_pos, unit_type);
	
	switch(unit_type)
	{
		case g_PLAYER:
			std::cout << "��";
			break;
		case g_SLIME:
			std::cout << "��";
			break;
	}
	
}

void Unit::move(const int& dx, const int& dy)
{
	m_cur_pos.setX(m_cur_pos.getX() + dx);
	m_cur_pos.setY(m_cur_pos.getY() + dy);
}

void Unit::erase(Point ref_pos)
{
	Point::GetScrPosFromCurPos(ref_pos);
	Point::gotoxy(ref_pos);
	std::cout << " ";
}

void Unit::move_character(const int key, const int& unit_type)
{
	using namespace std;
	
	if(key == g_KEY_UP) // move up
	{
		move(0, 1);
	
		if(check_valid_pos())
		{
			move(0, -1);
			m_board->mark_to_board(m_cur_pos);
			erase(m_cur_pos);
			
			// cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			
			
			move(0, 1);
			draw_something(m_cur_pos, unit_type);
		}
		else
		{
			move(0, -1);
		}
		
	}
	
	if(key == g_KEY_DOWN) // move down 
	{
		
		move(0, -1);
	
		if(check_valid_pos())
		{
			move(0, 1);
			m_board->mark_to_board(m_cur_pos);
			erase(m_cur_pos);
			
			//cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			
			
			move(0, -1);
			draw_something(m_cur_pos, unit_type);
		}
		else
		{
			move(0, 1);
		}	
	}
		
	if(key == g_KEY_RIGHT) // move right
	{
		move(1, 0);
	
		if(check_valid_pos())
		{
			move(-1, 0);
			m_board->mark_to_board(m_cur_pos);
			erase(m_cur_pos);
			
			
			// cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			
						
			move(1, 0);
			draw_something(m_cur_pos, unit_type);
		}
		else
		{
			move(-1, 0);
		}
	}
		
	if(key == g_KEY_LEFT) // move left
	{	
		move(-1, 0);
	
		if(check_valid_pos())
		{
			move(1, 0);
			m_board->mark_to_board(m_cur_pos);
			erase(m_cur_pos);
			
			// cout << "x: " << m_cur_pos.getX() << " y: " << m_cur_pos.getY();
			
			move(-1, 0);
			draw_something(m_cur_pos, unit_type);
		}
		else
		{
			move(1, 0);
		}
	}
};



bool Unit::check_valid_pos()
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

