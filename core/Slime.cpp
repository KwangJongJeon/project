#include "Slime.h"


Slime::Slime(Point ref_pos, Board *board)
	:Monster(ref_pos, board)
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
	
		 
		std::cout << "Slime : " <<  Unit::get_pos() << std::endl;
		// Monster::set_monster_position();
		Point::gotoxy(get_pos());
		Unit::draw_something(Unit::get_pos(), Unit::get_unit_type());
			
}

std::string Slime::stringForm()
{
	return "s";
}

