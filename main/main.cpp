#include <cstdlib>

#include "Game.h"
// #include "Point.h"


using namespace std;


int main()
{	
	// Point point(2,2);
	srand(time(0)); // set seed
	Game game;
	game.loop(); // game start
}
