#include "Point.h"

class Board
{
	private:
		int m_board[20][30];
		
	public:
		Board();
		
		void set_state(Point pos, int state);
		int get_state(Point pos);
};