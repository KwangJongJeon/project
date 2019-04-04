#include "Game.h"

void Game::draw_map()
{
	using namespace std;
	
	int i;
	
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
	for (i = 0; i < 20; ++i)
	{
		if(i == 2) cout << "��                                                            �� HP:        ��" << endl;
		if(i == 3) cout << "��                                                            �� MP:        ��" << endl;
		cout << "��                                                            ��            ��" << endl;
	}
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
	cout << endl;
	
	cout << "Dialog Frame" << endl; 
}

void Game::run()
{
	Unit player;
	
	int key = 0;
	
	draw_map();
	Point::gotoxy(player.get_cur_pos());
	player.draw_something(player.get_cur_pos(), g_PLAYER);

	
	while(true)
	{
		if(kbhit())
			{
				key = getch();
				if(key == 224 || key == 0)
				{
					key = getch();
					
					Point::gotoxy(player.get_cur_pos());	
					player.move_character(key, g_PLAYER); // temporary include. after Polymorphism is implemented, this will deleted			
				}
		}
	}
}


