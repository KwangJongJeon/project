#include "Board.h"

Board::Board() // board initialization
{
	int i, j;
	
	for(i = 0; i < 20; ++i)
		for(j = 0; j < 30; ++j)
			m_board[i][j] = 0;  
}

void Board::set_state(Point pos, int state)
{
	m_board[pos.getX()][pos.getY()] = state;
} // if states is 1, something exists

int Board::get_state(Point pos)
{
	return m_board[pos.getX()][pos.getY()];
}

