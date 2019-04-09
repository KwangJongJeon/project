#pragma once

#include <vector>

#include "Unit.h"
#include "Equipment.h"
#include "Item.h"


class Player : public Unit
{
	private:
		
		Equipment* m_wearing_weapon;
		Equipment* m_wearing_armor;
		
		std::vector<Item*> m_inventory;
		
		int m_hunger;
		
	public:
		Player(Point ref_pos = Point(0, 0));
		
		
		virtual std::string stringForm() const override;
		
		
		void set_wearing_weapon(Equipment& input_weapon);
		void set_wearing_armor(Equipment& input_armor);
		void set_hunger(const int& input_hunger) { m_hunger = input_hunger; }
		
		
		Equipment* get_wearing_weapon() { return m_wearing_weapon; }
		Equipment* set_wearing_armor() { return m_wearing_armor; }
		const int get_hunger() { return m_hunger; }
		
		
		virtual ~Player() override
		{
		}
		
		/* 
		 * 2019-04-07 
		 * TODO: if Player Press k(Equipment Status), print like this
		 * Head: HeadItemName
		 * Armor: ArmorItemName
		 * 
		 * maybe use Polymorphism?
		  
		  virtual friend std::ostream& operator << (std::ostream &out, const Item &item) override
		 {
			out << ... << ... ;
			return out;
		 }
	
		 */
		
		

};
