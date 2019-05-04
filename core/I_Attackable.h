#pragma once

#include <string>
#include "Stat.h"

class I_Attackable
{
	public:
		I_Attackable(){}
		virtual void attack(I_Attackable& enemy) = 0;
		virtual void reduceHP(int damage) = 0;
		virtual int get_status(const Stat& s) const = 0;
		virtual ~I_Attackable() {}; 
		
};