#pragma once

#include "Unit.h"

class Monster : public Unit
{
	protected:
	int m_giveExp; // if player kill monsters, take this exp from monster
		
	public:
		// void attack(Unit& player);
		Point set_monster_position();
	
};
