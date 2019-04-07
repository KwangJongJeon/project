#include "Game.h"





void Game::getInput()
{
	key = userInput.getInput();
}


// move to Unit.cpp later
void Game::update()
{
	updateUser(input);
}

void Game::updateUser()
{
	board.updateUser(input);
}

void Game::render()
{
	terminal.render();
}