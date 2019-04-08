#include "Player.h"

Player::Player(Point ref_pos)
	: Unit(ref_pos)
{
	// set status
	Unit::set_unit_type(g_PLAYER);
		
	Unit::set_STR(10);
	Unit::set_INT(2);
	Unit::set_DEX(5);
	Unit::set_CON(10);
	Unit::set_LUK(5);

	Unit::set_EXP(0);
		
	Unit::set_status();
			
		// std::cout << Unit::get_pos() << std::endl;
	Unit::set_pos(Point(2, 2)); // 2, 2 is player's start position
		
}

std::string Player::stringForm()
{
	return "@"
}

void Player::set_wearing_weapon(Equipment& input_weapon)
{
	m_wearing_weapon = &input_weapon;
	m_wearing_weapon->set_equipment_ATK(set_equipment_ATK);
	m_wearing_weapon->set_equipment_DEF(set_equipment_DEF);
}


void Player::set_wearing_armor(Equipment& input_weapon)
{
	m_wearing_armor = &input_weapon;
	m_wearing_weapon->set_equipment_ATK(m_wearing_weapon->get_equipment_ATK);
	m_wearing_weapon->set_equipment_DEF(set_equipment_DEF);
}