#pragma once
// unit's status
// Strength, +1 STR -> +3 ATK
// Intelligence, affect to max_mp and magic ATK. +1 Int -> +5 max_mp
// Dexterity, affect to Dodge percentage -> maybe +1 Dex -> +1.0% Dodge percentage
// Constitution, affect to DEF and max_hp. maybe +1 CON -> +5 max_hp and +1 DEF 
// Experience, if this sical Hit percentage -> 1LUK -> ?
// LUCK, affect to Crit
enum class Stat {
	UNIT_TYPE, CUR_HP, ATK, DEF, LEVEL, EXP, STRINGFORM
};

Stat& operator++(Stat& s);
