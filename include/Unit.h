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


class Unit
{
	// player's id starts at 1.
	// monster's id starts at 10. tatus is 100, plus to m_Level, if level-up, player's 5 point will be distributed randomly
	
	// item's id starts at 100.
	  
	private:

		int			m_unit_type;
		int 		m_max_hp;
		int 		m_max_mp;
		int 		m_hp;
		int 		m_mp;
		int 		m_ATK;
		int 		m_DEF;
		int 		m_level;
		double 		m_critical_percentage;
		double 	 	m_dodge_percentage;
		

				
		// unit's status
		int m_STR;  // Strength, +1 STR -> +3 ATK
		int m_INT;  // Intelligence, affect to max_mp and magic ATK. +1 Int -> +5 max_mp
		int m_DEX;  // Dexterity, affect to Dodge percentage -> maybe +1 Dex -> +1.0% Dodge percentage
		int m_CON;  // Constitution, affect to DEF and max_hp. maybe +1 CON -> +5 max_hp and +1 DEF 
		int m_EXP;  // Experience, if this sical Hit percentage -> 1LUK -> ?
		int m_LUK;  // LUCK, affect to Crit

	
	protected:
		Point	m_cur_pos;
			
		
	public:
		Unit(Point ref_pos = Point(0, 0))
			: m_cur_pos(ref_pos) 
		{}
		
		// virtual std::string stringForm() const = 0; // pure abstract func
		virtual std::string stringForm() const = 0; // pure abstract func

	/*
		// Point get_cur_pos() { return m_cur_pos; }
		// void set_cur_pos(Point pos_in) { m_cur_pos = pos_in; }

		
		 * // this will be implemented in Board class
		void 	draw_something(Point ref_pos, const int& unit_type);
		void 	erase(Point ref_pos);
		
		void 	move(const int& dx, const int& dy);  // if move(0, 1), m_cur_pos.getY() = m_cur_pos.getY() + 1; 
		void 	move_character(const int key, const int& unit_type);
		
		bool 	check_valid_pos();
	*/	 

		void set_unit_type(const int& input_type)  { m_unit_type = input_type; }
		void set_STR(const int& input_str)  { m_STR = input_str; }
		void set_INT(const int& input_int)  { m_INT = input_int; }
		void set_DEX(const int& input_dex)  { m_DEX = input_dex; }
		void set_CON(const int& input_con)  { m_CON = input_con; }
		void set_EXP(const int& input_exp)  { m_EXP = input_exp; }
		void set_LUK(const int& input_luk)  { m_LUK = input_luk; }
		void set_ATK(const int& input_ATK)  { m_ATK = input_ATK; }
		void set_DEF(const int& input_DEF)  { m_DEF = input_DEF; }
		void set_max_hp(const int& hp_in)   { m_max_hp = hp_in; }
		void set_cur_hp(const int& hp_in);
	
		void set_pos(const Point& pos_in) { m_cur_pos = pos_in; }
		
		
		const int& get_unit_type() const { return m_unit_type;}
		const int& get_STR() const { return m_STR; }
		const int& get_INT() const { return m_INT; }
		const int& get_DEX() const { return m_DEX; }
		const int& get_CON() const { return m_CON; }
		const int& get_EXP() const { return m_EXP; }
		const int& get_LUK() const { return m_LUK; }
		const int& get_ATK() const { return m_ATK; }
		const int& get_DEF() const { return m_DEF; }
		const int& get_max_hp() const { return m_max_hp; }
		const int& get_cur_hp() const { return m_hp; }
		
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
