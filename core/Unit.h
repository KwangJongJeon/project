/*
 *  Unit image on board
 *  @ - player
 *  s - slime
 */ 

#pragma once

#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include "Point.h"
// #include "Board.h"
#include "values.h"
#include "Stat.h"


class Unit
{
	// player's id starts at 1.
	// monster's id starts at 10. tatus is 100, plus to m_Level, if level-up, player's 5 point will be distributed randomly
	
	// item's id starts at 100.
	  
	private:
	
		std::map<Stat, int> m_status;
		// TODO: 크리티컬 퍼센트 뽑아서 쓰는식으로 함수 구현

	protected:
		Point	m_cur_pos;
			
		
	public:
		Unit(Point ref_pos = Point(0, 0))
			: m_cur_pos(ref_pos)
		{}
	
		Unit(std::map<Stat, int> status_in, Point ref_pos = Point(0, 0))
			: m_cur_pos(ref_pos), m_status(status_in)
		{}
	
		virtual std::string stringForm() const = 0; // pure abstract func
	
		
		void setStat(Stat status_in, const int value) {m_status.at(status_in) = value;}
		// 20190413 - 추후에 move이용해서 구현.
		void setStatAll(std::map<Stat, int> stat_in){ m_status = stat_in; }
		void set_pos(const Point& pos_in) { m_cur_pos = pos_in; }
		
		int getStat(const Stat status) const;
		const std::map<Stat, int>& getStatAll() const { return m_status; }
		const Point& get_pos() const { return m_cur_pos; }
	

		void set_status();		
		bool dodge();
		bool critical_hit(); // Damage to enemy Unit with 3*ATK damage
		void attack(Unit& enemy_unit);
		
		void level_up(); // if level up, player's status is rised 5 point randomly
		
		~Unit()
		{
		}
};
