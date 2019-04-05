#include "Game.h"

void Game::draw_map()
{
	using namespace std;
	
	int i;
	
	cout << "ΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜ" << endl;
	for (i = 0; i < 18; ++i)
	{
		if(i == 2) cout << "ΆΜ                                                            ΆΜ HP:        ΆΜ" << endl;
		if(i == 3) cout << "ΆΜ                                                            ΆΜ MP:        ΆΜ" << endl;
		cout << "ΆΜ                                                            ΆΜ            ΆΜ" << endl;
	}
	cout << "ΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜΆΜ" << endl;
	cout << endl;
	
	cout << "Dialog Frame" << endl; 
}


void Game::run()
{
	draw_map();
	Player player;
	
	// Slime slime2;
	
	int key = 0;
	
	while(true)
	{
		if(kbhit())
			{
				key = getch();
				if(key == 224 || key == 0)
				{
					key = getch();
					
					Point::gotoxy(player.get_pos());	
					player.move_character(key, g_PLAYER); // temporary include. after Polymorphism is implemented, this will deleted			
				}
		}
	}
}


