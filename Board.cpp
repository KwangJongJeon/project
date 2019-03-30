#include "Board.h"

Board::Board() // board initialization
{
	int i, j;
	
	for(i = 0; i < 30; ++i)
		for(j = 0; j < 20; ++j)
			m_board[i][j] = -1;  
}

void Board::set_state(Point pos, int state)
{
	m_board[pos.getX()][pos.getY()] = state;
	
} // if states is 1, something exists

int Board::get_state(Point pos)
{
	std::cout << "   " <<  m_board[pos.getX()][pos.getY()] << "   ";
	return m_board[pos.getX()][pos.getY()];
}

/*
int Board::show_all_ingredients(Board board)
{
	for(i = 0; i < 20; ++i)
		for(j = 0; j < 30; ++j)
		{
			cout << board[i][j];
		}
	
}
*/

     
