#pragma once
#include "Equipment.h"

// This class do nothing.
// for Category of Equipment
class Armor : public Equipment
{
	private:
		
	public:
		Armor() {}
		
		virtual std:ostream& print(std::ostream& out) const override
		{
			std::cout << "Armor" << std::endl;
			return out;
		}
};
