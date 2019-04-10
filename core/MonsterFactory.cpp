#include "MonsterFactory.h"
// getline 이용해 파일 스트링 읽어온 후 substr로 쉼표사이 스트링 만들어서 값 나누기.
/*Monster MonsterFactory::createMonster(std::string name)
{
	using namespace std;
	
	const string filename = "Monsters"
	
	ifstream ifs(filename);
	
	if(!ifs)
	{
		cerr << "Cannot open File" << endl;
		exit(1);
	}	
	
	while(ifs)
	{
		std::string str;
		getline(ifs, str);
	}
	
}
*/
std::string MonsterFactory::IOControl(std::string filename)
{
	using namespace std;
	
	string result;
	{
		ifstream ifs(filename);

		while(ifs)
		{
			string str;
			getline(ifs, str);
			result += str;
		}
	}	
	return result;
}