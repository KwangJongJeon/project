#include "Monster.h"

Point Monster::set_monster_position()
{
	const int monster_pos_x = rand()%30;
	const int monster_pos_y = rand()%20; 
	
	return Point(monster_pos_x, monster_pos_y);
}
