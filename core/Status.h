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
		
		
		void set_status(const Stat& s, int value);
		void set_unit_type(std::string type_in);
		void set_string_form(std::string form_in);
	
		int get_status(const Stat& s) const;
		std::string get_string_form() const;
		std::string get_unit_type() const;
	
	
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
		std::string _units_string_form;
		std::string _units_type;
};