#pragma once

#include <map> 
#include <string>
#include <iostream>
#include <fstream>
#include "Stat.h"

class Status {
	public:
		// Status(std::istream& is);
		Status(){}
		Status(std::map<Stat, int> status_in);
		
		int get_status(const Stat& s) const;
		void set_status(const Stat& s, int value);
		friend std::ostream& operator << (std::ostream& out, Status &s)
		{
			// for(Stat iter = Stat::UNIT_TYPE; iter != Stat::LAST; ++iter )
			// {
			// 	out << s.get_status(iter) <<  std::endl;
			// }
			return out;
		}
	
	private:
		std::map<Stat, int> _status;
};