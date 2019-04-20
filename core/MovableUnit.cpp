#include "MovableUnit.h"

using namespace std;

MovableUnit::MovableUnit(const int& x_in, const int& y_in, pair<int, int> board_in)
	: _cur_pos(x_in, y_in), _board(board_in)
	{
		_status = Status();
	}

MovableUnit::MovableUnit(vector<MovableUnit*>& units_in, const int& x_in, const int& y_in, pair<int, int> board_in)
	: _cur_pos(x_in, y_in), _board(board_in), _units(units_in)
	{
		_status = Status(); 
	}

MovableUnit::MovableUnit(Status status_in, const int& x_in, const int& y_in, pair<int, int> board_in)
	: _cur_pos(x_in, y_in), _board(board_in), _status(status_in)
	{}

std::vector<MovableUnit*> MovableUnit::get_enemies()
{
// MovableUnit::MovableUnit(vector<MovableUnit*>& units_in, const int& x_in, const int& y_in, pair<int, int> board_in)
// 	: _cur_pos(x_in, y_in), _board(board_in), _units(units_in)
// 	{
// 		_status = Status(); 
// 	}

	vector<MovableUnit*> enemies;
	
	//  set enemy_pos
	for(auto &ele : _units)
	{
		if(ele->_cur_pos != this->_cur_pos)
			enemies.push_back(ele);
	}
	
	return enemies;
}

void MovableUnit::move(const int& dx_in, const int& dy_in)
{
	
	auto expected_pos = this->_cur_pos;
	
	if (expected_pos.first + dx_in >= _board.first && 
	    expected_pos.second + dy_in >= _board.second)
	{
		
	}
	
	else
	{
		
		expected_pos.first += dx_in;
		expected_pos.second += dy_in; 
		_cur_move = make_pair(dx_in, dy_in);
		
		auto enemies = get_enemies();
		
		for(auto & enemy : enemies) 
		{
			if(expected_pos == enemy->_cur_pos) 
			{
				attack(*enemy);
				return;
			} 
		}
		
		_cur_pos.first += dx_in;
		_cur_pos.second += dy_in; 
	}
}


void MovableUnit::attack(I_Attackable& enemy)
{	
	// damage = Attackter's ATK - target's DEF
	int damage = calculate_damage(_status.get_status(Stat::ATK));
	
	enemy.reduceHP(damage);
} 

void MovableUnit::reduceHP(int damage)
{
	_status.set_status(Stat::CUR_HP, get_status(Stat::CUR_HP) - damage);
}

int MovableUnit::calculate_damage(const int& damage)
{
	return (damage - _status.get_status(Stat::DEF));
}

int MovableUnit::get_hp() const
{
	return _status.get_status(Stat::CUR_HP);
}

int MovableUnit::get_status(const Stat& s) const
{
	return _status.get_status(s);
}

Status MovableUnit::get_status_all() const
{
	return _status;
}

