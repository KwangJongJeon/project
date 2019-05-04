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

	vector<MovableUnit*> enemies;
	
	//  set enemy_pos
	for(auto &ele : _units)
	{
		if(ele->_cur_pos != this->_cur_pos)
			enemies.push_back(ele);
	}
	
	return enemies;
}

void MovableUnit::move(const int& dx_in, const int& dy_in) {
	
	pair<int, int> expected_pos = make_pair(_cur_pos.first + dx_in, _cur_pos.second + dy_in);
	
	// check unit in valid position
	if(check_unit_in_valid_pos(expected_pos))
	{
		// cout << "cur_pos: " << _cur_pos.first << ", " << _cur_pos.second << endl;
		// cout << "expected_pos: " << expected_pos.first << ", " << expected_pos.second << endl;
		// cout << "not move!" << endl;
		// cout << "This pos is : " << *this << endl;
		return;
	} 
	else {
		
		// cout << "move!" << endl;
		// cout << "cur_pos: " << _cur_pos.first << ", " << _cur_pos.second << endl;
		// cout << "expected_pos: " << expected_pos.first << ", " << expected_pos.second << endl;
		// cout << "board_size" << _board.first << ", " << _board.second << endl;
		
		expected_pos.first += dx_in;
		expected_pos.second += dy_in; 
		_cur_move = make_pair(dx_in, dy_in);
		
		auto enemies = get_enemies();
		
		for(auto & enemy : enemies) 
		{
			
			if(expected_pos == enemy->_cur_pos) 
			{
				// cout << "for loop is done" << endl;
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
	// cout << "Attack done" << endl;
	
	int damage = calculate_damage(_status.get_status(Stat::ATK), enemy);
	// cout << "Damage : " << damage << endl;
	
	enemy.reduceHP(damage);
} 

void MovableUnit::reduceHP(int damage)
{
	_status.set_status(Stat::CUR_HP, (get_status(Stat::CUR_HP) - damage));
}

int MovableUnit::calculate_damage(const int& damage, I_Attackable& enemy)
{
	cout << "ATK:  " << _status.get_status(Stat::ATK) << endl;
	return (damage - enemy.get_status(Stat::DEF));
}

bool MovableUnit::check_unit_in_valid_pos(pair<int, int> pos) {
	return	pos.first > _board.first - 1 || 
			pos.second > _board.second - 1 ||
	    	pos.first < 0 || 
	    	pos.second < 0;
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

void MovableUnit::set_board(std::vector<MovableUnit*>& board_in) {
	_units = board_in;
}


string MovableUnit::get_string_form() const {
	return _status.get_string_form();
}

pair<int, int> MovableUnit::get_pos() const {
	return _cur_pos;
}

string MovableUnit::get_unit_type() const {
	return _status.get_unit_type();
}
