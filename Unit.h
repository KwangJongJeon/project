#pragma once

class Unit
{
	private:
		int m_max_hp;
		int m_max_mp;
		int m_hp;
		int m_mp;
		int m_ATK;
		int m_DEF;
		int m_Level
		
		// player's status
		int m_STR;  // Strength, +1 STR -> +3 ATK
		int m_INT;  // Intelligence, affect to max_mp and magin ATK
		int m_DEX;  // Dexterity, affect to Dodge percentage -> maybe +1 Dex -> +0.8% Dodge percentage
		int m_CON;  // Constitution, affect to DEF and max_hp. maybe +1 CON -> +5 max_hp and +1 DEF 
		int m_EXP;  // Experience, if this status is 100, plus to m_Level, if level-up, player's 5 point will be distributed randomly
		int m_LUK;  // LUCK, affect to Critical Hit percentage -> 1LUK -> ?
		
		int m_wearing_weapon;
		int m_wearing_armor;
		int m_hunger;
		
	public:
		void dodge();
		void attack();
		void critical_hit();
		
		
		void set_STR(int input_str) { m_STR = input_str; }
		void set_INT(int input_int) { m_INT = input_int; }
		void set_DEX(int input_dex) { m_DEX = input_dex; }
		void set_CON(int input_con) { m_CON = input_con; }
		void set_EXP(int input_exp) { m_EXP = input_exp; }
		void set_LUK(int input_luk) { m_LUK = input_luk; }
		
		
		void set_wearing_weapon(int input_weapon) { m_wearing_weapon = input_weapon; }
		void set_wearing_armor(int input_armor) { m_wearing_armon = input_armor; }
		void set_hunger(int input_hunger) { m_hunger = input_hunger; }
		
		void get_STR()
		
		void level_up()
		{
			if(m_EXP >= 100)
				m_level += 1;
			
			// need more code for random distributed code	
		}


};
