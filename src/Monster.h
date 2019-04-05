#pragma once

#include "Unit.h"

class Monster : public Unit
{
	private:
	int m_giveExp; // if player kill monsters, take this exp from monster
		
	public:
		Monster(Point ref_pos = Point(0, 0), Board *board = new Board)
			: Unit(ref_pos, board)
		{}
		
		void set_giveExp(const int& exp_in) { m_giveExp = exp_in;}
		const int& get_giveExp() { return m_giveExp; }
		
		// void attack(Unit& player);
		void set_monster_position();
	
	
	
};
