#pragma once

// unit's status
// Strength, +1 STR -> +3 ATK
// Intelligence, affect to max_mp and magic ATK. +1 Int -> +5 max_mp
// Dexterity, affect to Dodge percentage -> maybe +1 Dex -> +1.0% Dodge percentage
// Constitution, affect to DEF and max_hp. maybe +1 CON -> +5 max_hp and +1 DEF 
// Experience, if this sical Hit percentage -> 1LUK -> ?
// LUCK, affect to Crit
enum class Stat {
	UNIT_TYPE,
	BASIC_ATK, BASIC_DEF, LEVEL,
	STR, INT, DEX, CON, LUK, EXP, LAST
};

// void Unit::set_status()
// {
// 	m_max_hp +=  m_CON * 5;
// 	m_hp = m_max_hp;
	
// 	m_max_mp += m_INT * 5;
// 	m_mp = m_max_mp;
	
// 	m_ATK += m_STR * 3;
// 	m_DEF += m_CON * 1;
	
// 	m_critical_percentage += 0.8 * m_LUK;
// 	m_dodge_percentage += 1.0 * m_DEX;
// }


// void Unit::set_cur_hp(const int& hp_in)
// {
// 	if(hp_in < m_max_hp)
// 		m_hp = hp_in;
// 	else
// 		m_hp = m_max_hp;
// }

