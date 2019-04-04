class Player : public Unit
{
	private:
		
	public:
		Player()
		{
			m_unit_id = 1;
			
			m_max_hp = 50;
			m_hp = m_max_hp;
			
			m_max_mp = 10;
			m_mp = m_max_mp;
			
			m_ATK = 7;
			m_DEF = 2;
			m_level = 1;
			
			m_critical_percentage = 10;
			m_dodge_percentage = 10;

			m_STR = 0;
			m_INT = 0;
			m_CON = 0;
			m_ATK = 0;
		}

};
