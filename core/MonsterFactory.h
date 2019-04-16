// #pragma once

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <vector>
// #include <map>

// #include "Monster.h"


// std::map<Stat, int> m_status;

// // TODO 
// // createMonst(string name) --> return to monster class, monster
// class MonsterFactory
// {
// 	private:
// 		std::map<std::string, std::vector<std::string>> m_monsters;
		
// 	public:
// 		Monster createMonster(std::string name);
	
// 		// 받은 파일 const char* filename을 이용하여 클래스를 초기화한다.
// 		// 이 클래스를 이용하기전 반드시 사용해서 초기화 할것
// 		void initMapUsing(const char* filename);
		
// 		// Data in file form
// 		// Monster name, STR, INT, DEX, CON, LUK, giveExp, return String Form
// 		void parseMonsterFrom(std::string str);
	
// 		std::map<std::string, std::vector<std::string>> getMonsters() {return m_monsters;}
	
	
// };