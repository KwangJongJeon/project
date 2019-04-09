#pragma once
#include "Equipment.h"

// This class do nothing.
// for Category of Equipment
class Hand : public Equipment
{
	private:
		
	public:
		Hand() {}
		
		virtual std::ostream& print(std::ostream& out) const override
		{
			std::cout << "Hand" << std::endl;
			return out;
		}
};