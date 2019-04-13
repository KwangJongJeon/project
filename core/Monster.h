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
		
		Monster(std::map<Stat, int> status_in, Point ref_pos = Point(0, 0))
			: Unit(status_in, ref_pos)
		{}
		
		// virtual std::string stringForm() const override = 0;
		virtual std::string stringForm() const override
		{
			return "M";
		}
		


		void set_giveExp(const int& exp_in) { m_giveExp = exp_in;}
		void set_monster_position();
		
		
		const int& get_giveExp() { return m_giveExp; }		
		
		friend bool operator == (const Monster& mon1, const Monster& mon2)
		{
			return (
			mon1.getStat(Stat::UNIT_TYPE) == mon2.getStat(Stat::UNIT_TYPE) && 
			mon1.getStat(Stat::BASIC_ATK) == mon2.getStat(Stat::BASIC_ATK) &&
			mon1.getStat(Stat::BASIC_DEF) == mon2.getStat(Stat::BASIC_DEF) &&
			mon1.getStat(Stat::LEVEL) == mon2.getStat(Stat::LEVEL) &&
			mon1.getStat(Stat::STR) == mon2.getStat(Stat::STR) &&
			mon1.getStat(Stat::INT) == mon2.getStat(Stat::INT) &&
			mon1.getStat(Stat::DEX) == mon2.getStat(Stat::DEX) &&
			mon1.getStat(Stat::CON) == mon2.getStat(Stat::CON) &&
			mon1.getStat(Stat::LUK) == mon2.getStat(Stat::LUK) &&
			mon1.getStat(Stat::EXP) == mon2.getStat(Stat::EXP)
			);
		}
		~Monster()
		{

		}
		
		
};
