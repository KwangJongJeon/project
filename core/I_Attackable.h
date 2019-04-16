#pragma once

#include <string>

class I_Attackable
{
	public:
		I_Attackable(){}
		virtual void attack(I_Attackable& enemy) = 0;
		virtual void reduceHP(int damage) = 0;
		virtual ~I_Attackable() {}; 
		
};