#pragma once

#include <iostream>
#include <string>


class Item
{
	private:
		std::string m_item_name;
	
	
	public:
		Item(const std::string& name_in = "MissingNo.")
			:m_item_name(name_in)
		{}
	
	
		void set_item_name(const std::string& name_in) { m_item_name = name_in; }
	
	
		const std::string& get_item_name() { return m_item_name; }
 
};