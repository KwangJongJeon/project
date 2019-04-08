#include "Monster.h"

void Monster::set_monster_position()
{
	const int monster_pos_x = rand()%30;
	const int monster_pos_y = rand()%20; 
	
	Unit::set_pos(Point(monster_pos_x, monster_pos_y));
}
