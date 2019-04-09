#pragma once

#include "Item.h"

/*
 * Equipment Category: Hand, Armor 
 */

class Equipment : public Item
{
	private:
		int m_equipment_ATK;
		int m_equipment_DEF;
	
	public:
		Equipment(const int& ATK_in = 0, const int& DEF_in = 0)
			: m_equipment_ATK(ATK_in), m_equipment_DEF(DEF_in) 
		{}
		
	
		void set_equipment_ATK(const int& ATK_in) { m_equipment_ATK = ATK_in; }
		void set_equipment_DEF(const int& DEF_in) { m_equipment_DEF = DEF_in; }
	
		const int& get_equipment_ATK()  { return m_equipment_ATK; }
		const int& get_equipment_DEF()  { return m_equipment_DEF; }
		
		
		
		
		
		
		friend bool operator == (const Equipemnt& e1, const Equipment& e.2)
		{
			return e1.get_item_name == e2.get_item_name;
		}
		
		
		
		friend std::ostream& operator << (std::ostream & out, Equipment& e)
		{
			return e.print(out);
		}
		
		virtual std::ostream& print(std::ostream& out) const override
		{
			std::cout << "Equipment" << std::endl;
			return out;
		}
		

};
