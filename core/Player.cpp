#include "Player.h"

Player::Player(Point ref_pos)
	: Unit(ref_pos)
{
	// set status
	setStat(Stat::UNIT_TYPE, 10);
	setStat(Stat::STR, 10);	
	setStat(Stat::INT , 2);	
	setStat(Stat::DEX , 5);	
	setStat(Stat::CON , 10);	
	setStat(Stat::LUK , 5);	
	setStat(Stat::EXP , 0);			

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


/*
std::string Player::stringForm() const
{
	return "@";
}
*/

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
		setStat(Stat::BASIC_ATK, 
				getStat(Stat::BASIC_ATK) + cur_equip.get_equipment_ATK());
		setStat(Stat::BASIC_DEF,
				getStat(Stat::BASIC_DEF) + cur_equip.get_equipment_DEF());
	}
	else
	{
		setStat(Stat::BASIC_ATK, getStat(Stat::BASIC_ATK) - cur_equip.get_equipment_ATK());
		setStat(Stat::BASIC_DEF, getStat(Stat::BASIC_DEF) - cur_equip.get_equipment_DEF());
		
		cur_equip = equip_in;
		setStat(Stat::BASIC_ATK, getStat(Stat::BASIC_ATK) +  cur_equip.get_equipment_DEF());
		setStat(Stat::BASIC_DEF, getStat(Stat::BASIC_DEF) +  cur_equip.get_equipment_DEF());
	}
}


