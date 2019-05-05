#include "MonsterAI.h"

using std::string; using std::pair;
using std::cout; using std::endl;


MonsterAI::MonsterAI(std::string name_in, std::vector<MovableUnit*>& units_in, MovableUnit& monster_in)
	: _monster(monster_in), _units(units_in)
{
	set_detection_range(name_in);
}


void MonsterAI::set_detection_range(string mon_name) {
	if(mon_name == "Slime")
		_detection_range = std::make_pair(3, 3);
} 


void MonsterAI::move_AI() {
	cout << "AI move?" << endl;
	auto player = find_player();
	auto user_pos = player.get_pos();
	auto monster_pos = _monster.get_pos();
	
	if(detect_user()) {
		cout << "AI move!" << endl;
		if(monster_pos.first < user_pos.first)
			_monster.move(1, 0);
		
		if(monster_pos.first > user_pos.first)
			_monster.move(-1, 0);
		
		if(monster_pos.second < user_pos.second)
			_monster.move(0, 1);
		
		if(monster_pos.second > user_pos.second)
			_monster.move(0, -1);
	}
	else {
		cout << "not AI move" << endl;
	}
}


bool MonsterAI::detect_user() {
	auto player = find_player();
	auto user_pos = player.get_pos();
	auto monster_pos = _monster.get_pos();
	
	return
		(monster_pos.first - _detection_range.first < user_pos.first ||
		monster_pos.first + _detection_range.first  > user_pos.first) &&
		(monster_pos.second + _detection_range.second < user_pos.second ||
		monster_pos.second - _detection_range.second > user_pos.second);
}

MovableUnit MonsterAI::find_player() {
	for(auto & ele : _units) {
		if (ele->get_unit_type() == "Player")
			return *ele;
		else {
			cout << "can't find player on board" << endl;
		}
	}
	
}