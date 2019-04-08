#include "Game.h"

void Game::getInput()
{
	input = userInput.getInput();
}


void Game::update()
{

}


void Game::render()
{
	terminal.render(board.stringForm());
}