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
		Item(const int& ATK_in = 0, const int& DEF_in = 0)
			: m_equipment_ATK(ATK_in), m_equipment_DEF(DEF_in) 
		{}
		
	
		void set_equipment_ATK(const int& ATK_in) { m_equipment_ATK = ATK_in; }
		void set_equipment_DEF(const int& DEF_in) { m_equipment_DEF = DEF_in; }
	
		const int& get_equipment_ATK()  { return m_equipment_ATK; }
		const int& get_equipment_DEF()  { return m_equipment_DEF; }

};
