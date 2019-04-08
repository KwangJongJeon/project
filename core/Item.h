#pragma once

#include <iostream>
#include <string>


class Item
{
	private:
		std::string m_item_name;
	
	
	public:
		Item(std::stirng name_in = "MissingNo.")
			:m_item_name(name_in)
		{}
	
	
		void set_item_name(const std::string& name_in) { m_item_name = name_in; }
	
	
		const int& get_item_name() { m_item_name = name_in; }
 
}