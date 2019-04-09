#pragma once

#include "Unit.h"

class Monster : public Unit
{
	private:
	int m_giveExp; // if player kill monsters, take this exp from monster
		
	public:
		Monster(Point ref_pos = Point(0, 0))
			: Unit(ref_pos)
		{}
		
		// virtual std::string stringForm() const override = 0;
		virtual std::string stringForm() const override
		{
			return "M"
		}
		


		void set_giveExp(const int& exp_in) { m_giveExp = exp_in;}
		void set_monster_position();
		
		
		const int& get_giveExp() { return m_giveExp; }		
		
		// void attack(Unit& player);
		
	
		~Monster()
		{

		}
		
		
		void attack(Player& player)
		{
			if(dodge()) 
			{
				return; 
			}
			else if(critical_hit())
			{
				enemy_unit.m_hp - 3*( m_ATK - enemy_unit.m_DEF );
			}
			else
			{
				enemy_unit.m_hp - ( m_ATK - enemy_unit.m_DEF );
			}
		}
		
};
