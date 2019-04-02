#include "Monster.h"

class Slime : public Monster
{
	private:
		
		
	public:
		Slime()
		{
			// set status
			m_unit_id = g_SLIME;

			m_max_hp = 30;
			m_hp = m_max_hp;
			
			m_max_mp = 0;
			m_mp = m_max_mp;
			
			m_ATK = 4;
			m_DEF = 1;
			m_level = 1;
			
			m_critical_percentage = 5;
			m_dodge_percentage = 5;

			m_STR = 0;
			m_INT = 0;
			m_CON = 0;
			m_ATK = 0;
			
			m_giveExp = 20;
			
			// 
			m_cur_pos = set_monster_position();
			draw_something(m_cur_pos, m_unit_id);
		}
		
		
		
};
