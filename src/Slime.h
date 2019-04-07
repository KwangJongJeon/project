#include "Monster.h"

class Slime : public Monster
{
	private:
		
		
	public:
		Slime(Point ref_pos = Point(0, 0), Board *board = new Board);
		
		~Slime() virtual override
		{
			delete m_board;
			m_board = 0;
		}
};
