#include "Stat.h"

Stat& operator++(Stat& s)
{
	switch(s)
	{
		case Stat::UNIT_TYPE: return s = Stat::CUR_HP;
		case Stat::CUR_HP: return s = Stat::ATK;
		case Stat::ATK: return s = Stat::DEF;
		case Stat::DEF: return s = Stat::LEVEL;
		case Stat::LEVEL: return s = Stat::EXP;
		case Stat::EXP: return s = Stat::LAST;
		case Stat::LAST: return s = Stat::UNIT_TYPE;
	}	
}