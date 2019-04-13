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

// SecondaryStat is calculated by Stat
enum class SeconaryStat
{
	MAX_HP, MAX_MP, HP, MP, 
	ATK, DEF
};


Stat& operator ++(Stat& s)
{
	switch(s)
	{
		case Stat::UNIT_TYPE: return s = Stat::BASIC_ATK;
		case Stat::BASIC_ATK: return s =Stat::BASIC_DEF;
		case Stat::BASIC_DEF: return s = Stat::LEVEL;
		case Stat::LEVEL: return s = Stat::STR;
		case Stat::STR: return s = Stat::INT;
		case Stat::INT: return s = Stat::DEX;
		case Stat::DEX: return s = Stat::CON;
		case Stat::CON: return s = Stat::LUK;
		case Stat::LUK: return s = Stat::EXP;
		case Stat::EXP : return s = Stat::LAST;
		case Stat::LAST : return s = Stat::UNIT_TYPE;
	}
}

