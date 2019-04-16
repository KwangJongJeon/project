#include "MovableUnit.h"

using namespace std;

MovableUnit::MovableUnit(const int& x_in, const int& y_in, pair<int, int> board_in)
			: _cur_pos(x_in, y_in), _board(board_in)
	{
			_hp = 50;
			_ATK = 5;
	}

MovableUnit::MovableUnit(vector<MovableUnit*>& units_in, const int& x_in, const int& y_in, pair<int, int> board_in)
	: _cur_pos(x_in, y_in), _board(board_in), _units(units_in)
	{
		_hp = 50;
		_ATK = 5;
	}

std::vector<MovableUnit*> MovableUnit::get_enemies()
{
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
	// for(unit in vector) {
	// 	if (unit.pos == expectedPos) {
	// 		attack(unit)
	// 	}
	// }

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
	// 2019-04-15 TODO: implement status class and improve it use status class to arguments
	enemy.reduceHP(5);
} 
// ?
// 아 이거 damage 들어가는곳이없는데 정의된곳이업음
// 이렇게 하면 지금 그냥 상수로 넣어도되고 아 그네
// 나중에 스테이터스 만들면 함수 안에만 바꾸면 되잖아
// void attack(I_Attackable& attackable) {
// 	attackable.reduceHp(_status.damage());
// }

void MovableUnit::reduceHP(int damage)
{
	// damage = damage - _status.deffence();
	this->_hp -= damage;

}

const int& MovableUnit::get_hp() const
{
	return _hp;
}