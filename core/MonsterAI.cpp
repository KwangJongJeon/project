#include "MonsterAI.h"

using std::string; using std::pair;
using std::cout; using std::endl;


MonsterAI::MonsterAI(std::string name_in, std::vector<MovableUnit*>* units_in, MovableUnit* monster_in)
{
	_monster = monster_in;
	_units = units_in;
	set_detection_range(name_in);
}


void MonsterAI::set_detection_range(string mon_name) {
	if(mon_name == "Slime")
		_detection_range = std::make_pair(1, 1);
} 


void MonsterAI::move_AI() {
auto player = find_player();
	auto user_pos = player.get_pos();
	auto monster_pos = _monster->get_pos();
	
	if(detect_user()) {
		if(monster_pos.first < user_pos.first)
			_monster->move(1, 0);
		
		else if(monster_pos.first > user_pos.first)
			_monster->move(-1, 0);
		
		else if(monster_pos.second < user_pos.second)
			_monster->move(0, 1);
		
		else if(monster_pos.second > user_pos.second)
			_monster->move(0, -1);
	}
	else {
	}
}


bool MonsterAI::detect_user() {
	auto player = find_player();
	auto user_pos = player.get_pos();
	auto monster_pos = _monster->get_pos();
	// cout << "monster_pos : " << monster_pos.first << ", " << monster_pos.second << endl;
	// cout << "user_pos: " << user_pos.first << ", " << user_pos.second << endl;
	return
		((user_pos.first < (monster_pos.first + _detection_range.first) ||
		  user_pos.first > (monster_pos.first - _detection_range.first)) &&
		 (user_pos.second < (monster_pos.second + _detection_range.second) ||
		  user_pos.second > (monster_pos.second - _detection_range.second)));
}

MovableUnit MonsterAI::find_player() {
	for(auto & ele : (*_units)) {
		if (ele->get_unit_type() == "Player")
			return *ele;
		else {
			cout << "can't find player on board" << endl;
		}
	}
	
}