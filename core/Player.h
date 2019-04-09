#pragma once

#include <vector>

#include "Unit.h"
#include "Item.h"
#include "Equipment.h"
#include "Shortsword.h"
#include "LeatherArmor.h"


class Player : public Unit
{
	private:
		
		Equipment m_wearing_weapon;
		Equipment m_wearing_armor;
		
		// weapon in m_playger_equipment[0]
		// armor in m_player_equipment[1]
		std::vector<Equipment*> m_player_equipment;
		std::vector<Item*> m_inventory;
		
		int m_hunger;
		
	public:
		Player(Point ref_pos = Point(0, 0));
		void init_equipment();
		
		
		// virtual std::string stringForm() const override = 0;
		virtual std::string stringForm() const override
		{
			return "@";
		}
		
		
		void exchange_equipment(Equipment& cur_equip, Equipment& equip_in);
		
		void set_wearing_weapon(Equipment& input_weapon);
		void set_wearing_armor(Equipment& input_armor);
		void set_hunger(const int& input_hunger) { m_hunger = input_hunger; }

		
		const Equipment& get_wearing_weapon() const { return m_wearing_weapon; }
		const int& get_hunger() { return m_hunger; }
		
		
		
		
		~Player() 
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
		 * 2019-04-09 implemented. maybe ..... works well???
		 * if you want to see equipment status. 
		 * do like this.
		 * std::cout << m_player_equipment << std::endl;
		 */
		
		/*
		 * 2019-04-09
		 * need implement print equipment status. maybe like this?
		 * void print_equipment_status(const Player& player)
		 * {
		 *		for(...) cout << player.m_player_equipment << endl;
		 * }
		 *
		 */
		

};
