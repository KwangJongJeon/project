#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Monster.h"

// TODO 
// createMonst(string name) --> return to monster class, monster
class MonsterFactory
{
	private:
		
	public:
		Monster createMonster(std::string name);
		std::string IOControl(std::string filename);
};