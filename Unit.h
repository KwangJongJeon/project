#pragma once

#include <cstdlib>

class Unit
{
	// player's id starts at 1.
	// monster's id starts at 10. 
	// item's id starts at 100.
	  
	private:
		int		m_unit_id;
		int 	m_max_hp;
		int 	m_max_mp;
		int 	m_hp;
		int 	m_mp;
		int 	m_ATK;
		int 	m_DEF;
		int 	m_level;
		double 	m_critical_percentage;
		double 	m_dodge_percentage;
		
		
		// unit's status
		int m_STR;  // Strength, +1 STR -> +3 ATK
		int m_INT;  // Intelligence, affect to max_mp and magic ATK. +1 Int -> +5 max_mp
		int m_DEX;  // Dexterity, affect to Dodge percentage -> maybe +1 Dex -> +1.0% Dodge percentage
		int m_CON;  // Constitution, affect to DEF and max_hp. maybe +1 CON -> +5 max_hp and +1 DEF 
		int m_EXP;  // Experience, if this status is 100, plus to m_Level, if level-up, player's 5 point will be distributed randomly
		int m_LUK;  // LUCK, affect to Critical Hit percentage -> 1LUK -> ?
		
		
		int m_wearing_weapon;
		int m_wearing_armor;
		int m_hunger;
		
		
	public:
		bool dodge();
		bool critical_hit(); // Damage to enemy Unit with 3*ATK damage
		void attack(Unit& enemy_unit);
		
		
		void set_STR(const int& input_str) { m_STR = input_str; }
		void set_INT(const int& input_int) { m_INT = input_int; }
		void set_DEX(const int& input_dex) { m_DEX = input_dex; }
		void set_CON(const int& input_con) { m_CON = input_con; }
		void set_EXP(const int& input_exp) { m_EXP = input_exp; }
		void set_LUK(const int& input_luk) { m_LUK = input_luk; }
		
		
		void set_wearing_weapon(int input_weapon) { m_wearing_weapon = input_weapon; }
		void set_wearing_armor(int input_armor) { m_wearing_armor = input_armor; }
		void set_hunger(int input_hunger) { m_hunger = input_hunger; }
		
		
		void set_status();
		void level_up(); // if level up, player's status is rised 5 point randomly
	};
