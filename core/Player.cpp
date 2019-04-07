#include "Player.h"

Player::Player(Point ref_pos, Board *board)
	: Unit(ref_pos, board)
{
	// set status
	Unit::set_unit_type(g_PLAYER);
		
	Unit::set_STR(10);
	Unit::set_INT(2);
	Unit::set_DEX(5);
	Unit::set_CON(10);
	Unit::set_LUK(5);

	Unit::set_EXP(0);
		
	Unit::set_status();
			
		// std::cout << Unit::get_pos() << std::endl;
	Unit::set_pos(Point(2, 2)); // 2, 2 is player's start position
	Point::gotoxy(get_pos());
	Unit::draw_something(Unit::get_pos(), g_PLAYER);
			
}