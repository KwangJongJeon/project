#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
#include "Game.h"
// #include "Point.h"

using namespace std;

int main()
{	
	// Point point(2,2);
	// try {
		srand(time(0)); // set seed
		Game game;
		while(true) {
			game.loop(); // game start
		}
	// } catch (exception e) {
	// 	cout << e.what() << endl;
	// }
	// cout << "press any key to shut down" << endl;
	// std::string str;
	// cin >> str;
}
