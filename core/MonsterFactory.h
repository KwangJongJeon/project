#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

#include "MovableUnit.h"
#include "Status.h"

// TODO 
// createMonst(string name) --> return to monster class, monster
class MonsterFactory
{
	private:
		std::map<std::string, std::vector<std::string>> m_monsters;
		void initMapUsing(const char* filename);
		
	public:
		MonsterFactory();
		MovableUnit createMonster(std::string name, const int& pos_x = 0, const int& pos_y = 0, std::pair<int, int> board_in = std::make_pair(10, 10));
	
		
		
		// Data in file form
		// Monster name, STR, INT, DEX, CON, LUK, giveExp, return String Form
		void parseMonsterFrom(std::string str);
	
		std::map<std::string, std::vector<std::string>> getMonsters() {return m_monsters;}
	
	
};