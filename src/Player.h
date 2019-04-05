#include "Unit.h"
class Player : public Unit
{
	private:
		
	public:
		Player(Point ref_pos = Point(0, 0), Board *board = new Board)
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

/*
		~Player()
		{
			delete m_board;
			m_board = 0;
		}
*/
};
