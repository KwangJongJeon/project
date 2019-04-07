#include "Terminal.h"

/*
void Terminal::drawMap() const
{
	using namespace std;
	
	int i;
	
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
	for (i = 0; i < 18; ++i)
	{
		if(i == 2) cout << "��                                                            �� HP:        ��" << endl;
		if(i == 3) cout << "��                                                            �� MP:        ��" << endl;
		cout << "��                                                            ��            ��" << endl;
	}
	cout << "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�" << endl;
	cout << endl;
	
	cout << "Dialog Frame" << endl; 
}
*/

void Terminal::render(std::string stringForm)
{
	std::cout << stringForm << std::endl;
}