#include <cstdlib>

#include "Game.h"


using namespace std;


int main()
{
	srand(time(0)); // set seed
	Game game;
	game.loop(); // game start
}
