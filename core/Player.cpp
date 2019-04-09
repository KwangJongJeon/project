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
	
		
	// set equipment
	init_equipment();
	
	Unit::set_pos(Point(2, 2)); // 2, 2 is player's start position		
}

void Player::init_equipment()
{
	Shortsword short_sword;
	LeatherArmor leather_armor;
	set_wearing_weapon(short_sword);
	set_wearing_armor(leather_armor);
	m_player_equipment.push_back(&short_sword);
	m_player_equipment.push_back(&leather_armor);
}


std::string Player::stringForm() const
{
	return "@";
}


void Player::set_wearing_weapon(Equipment& input_weapon)
{
	exchange_equipment(m_wearing_weapon, input_weapon);
	m_player_equipment.at(0) = &m_wearing_weapon;
}


void Player::set_wearing_armor(Equipment& input_armor)
{
	exchange_equipment(m_wearing_armor, input_armor);
	m_player_equipment.at(1) = &m_wearing_weapon;
}


// 만약 무기를 가지고있다면 그만큼의 데미지가 유저에게 추가됨.
void Player::exchange_equipment(Equipment& cur_equip, Equipment& equip_in)
{
	if(cur_equip.get_item_name() == "MissingNo.")
	{
		cur_equip = equip_in;
		set_ATK(get_ATK() + cur_equip.get_equipment_ATK());
		set_DEF(get_DEF() + cur_equip.get_equipment_DEF());
	}
	else
	{
		set_ATK(get_ATK() - cur_equip.get_equipment_ATK());
		set_DEF(get_DEF() - cur_equip.get_equipment_DEF());
		
		cur_equip = equip_in;
		set_DEF(get_DEF() + cur_equip.get_equipment_DEF());
		set_DEF(get_DEF() + cur_equip.get_equipment_DEF());
	}
}


