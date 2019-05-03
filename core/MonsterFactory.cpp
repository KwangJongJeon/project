#include "MonsterFactory.h"

using std::string;
using std::vector;
using std::map;
using std::ifstream;
using std::cout;
using std::stoi;
using std::endl;

MonsterFactory::MonsterFactory()
{
	// monster's DB file : Monsters
	initMapUsing("resource/Monsters");
}
// Data form in file 
// Monster name, Unit_Type, BASIC_ATK, BASIC_DEF, LEVEL, STR, INT, DEX, CON, LUK, giveExp, StringForm //
MovableUnit MonsterFactory::createMonster(std::string name, const int& pos_x, const int& pos_y, std::pair<int, int> board_in)
{	
	//(String, vector<string>) -> (String, int(status))
	// (vector<string>) -> (string)m_status
	map<Stat, int> status;
	string string_form;
	if(name == "Slime" || name == "Player"){
		
		// for logging func.
		auto status_monster_vec_in = m_monsters.at(name); 
		
		Stat status_iterator = Stat::CUR_HP;

		for(auto &ele : status_monster_vec_in)
		{
			if(status_iterator != Stat::STRINGFORM)
			{
				status[status_iterator] = stoi(ele);
			}
			if(status_iterator == Stat::STRINGFORM)
			{
				string_form = ele;
			}
			++status_iterator;
		}

		Status monster_status(status);
		monster_status.set_string_form(string_form);
		monster_status.set_unit_type(name);
		//Monster created_monster(status);
		MovableUnit created_monster(monster_status, pos_x, pos_y, board_in);
		return created_monster;
	}
	else {
		std::cout << "Monster Factory Error! Wrong name is inputed" << std::endl;
	}
}


void MonsterFactory::initMapUsing(const char* filename)
{
	
	{
		ifstream ifs(filename);
		
		while(ifs)
		{
			string str;
			getline(ifs, str);
			parseMonsterFrom(str);
		}
	}
}


void MonsterFactory::parseMonsterFrom(string str)
{
	string delimiter = ",";
	string value;
	string key;
	vector<string> monster_status;
		
	size_t pos = 0;
	
	if((pos = str.find(delimiter)) != string::npos)
	{
		key = str.substr(0, pos);
		str.erase(0, pos + delimiter.length());
	}
	
	while((pos = str.find(delimiter)) != string::npos)
	{
		value = str.substr(0, pos);
		monster_status.push_back(value);
		str.erase(0, pos + delimiter.length());
	}
	
	monster_status.push_back(str);
	
	m_monsters[key] = monster_status;
}
