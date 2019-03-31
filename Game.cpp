#include "Game.h"

void Game::draw_map()
{
	using namespace std;
	
	int i;
	
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << "��                                                            ��" << endl;
	}
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
}


void Game::run()
{
	Unit player;
	
	int key = 0;
	
	draw_map();
	Point::gotoxy(player.get_cur_pos());
	player.draw_something(player.get_cur_pos());
	
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

