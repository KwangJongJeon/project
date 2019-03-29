#include "Unit.h"

void Unit::attack(Unit& enemy_unit)
{
	enemy_unit.m_hp - ( m_ATK - enemy_unit.m_DEF );
}


void Unit::level_up()
{
	if(m_EXP >= 100)
	m_level += 1;
	// need more code for random distributed code	
}

