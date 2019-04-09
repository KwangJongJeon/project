#include "Slime.h"


Slime::Slime(Point ref_pos)
	:Monster(ref_pos)
{
		
		// set status
		Unit::set_unit_type(g_SLIME);
		Unit::set_STR(5);
		Unit::set_INT(0);
		Unit::set_DEX(5);
		Unit::set_CON(6);
		Unit::set_LUK(5);
		Monster::set_giveExp(20);
	
		Unit::set_status();
		
		// Monster::set_monster_position();

}

std::string Slime::stringForm() const
{
	return "s";
}

