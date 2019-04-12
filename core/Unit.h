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
		Unit(std::map<Stat, int> status_in, Point ref_pos = Point(0, 0))
			: m_cur_pos(ref_pos), m_status(status_in)
		{}
	
		virtual std::string stringForm() const = 0; // pure abstract func
	
		int getStat(const Stat status) const;
		void setStat(Stat status_in, const int value) {m_status.at(status_in) = value;}
		// void set_unit_type(const int& input_type)  { m_unit_type = input_type; }
		// void set_STR(const int& input_str)  { m_STR = input_str; }
		// void set_INT(const int& input_int)  { m_INT = input_int; }
		// void set_DEX(const int& input_dex)  { m_DEX = input_dex; }
		// void set_CON(const int& input_con)  { m_CON = input_con; }
		// void set_EXP(const int& input_exp)  { m_EXP = input_exp; }
		// void set_LUK(const int& input_luk)  { m_LUK = input_luk; }
		// void set_ATK(const int& input_ATK)  { m_ATK = input_ATK; }
		// void set_DEF(const int& input_DEF)  { m_DEF = input_DEF; }
		// void set_max_hp(const int& hp_in)   { m_max_hp = hp_in; }
		// void set_cur_hp(const int& hp_in);
	
		void set_pos(const Point& pos_in) { m_cur_pos = pos_in; }
		
		
		// const int& get_unit_type() const { return m_unit_type;}
		// const int& get_STR() const { return m_STR; }
		// const int& get_INT() const { return m_INT; }
		// const int& get_DEX() const { return m_DEX; }
		// const int& get_CON() const { return m_CON; }
		// const int& get_EXP() const { return m_EXP; }
		// const int& get_LUK() const { return m_LUK; }
		// const int& get_ATK() const { return m_ATK; }
		// const int& get_DEF() const { return m_DEF; }
		// const int& get_max_hp() const { return m_max_hp; }
		// const int& get_cur_hp() const { return m_hp; }
		
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
