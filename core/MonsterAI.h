#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "MovableUnit.h"

class MonsterAI {
	
	public:
		MonsterAI(){}
		MonsterAI(std::string name_in, std::vector<MovableUnit*>* units_in,  MovableUnit* monster_in);
	
		void move_AI();	
	
	private:
		// it will be called in constructor
		void set_detection_range(std::string mon_name);
	
		bool detect_user();
	
		MovableUnit find_player();

	
		std::pair<int, int> _detection_range;
		MovableUnit* _monster;
		std::vector<MovableUnit*>* _units;
};