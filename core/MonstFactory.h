#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Monster.h"

// TODO 
// createMonst(string name) --> return to monster class, monster
class MonstFactory
{
	private:
		
	public:
		Monster createMonst(std::string name);
		
};