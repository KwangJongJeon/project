class Slime : public Unit
{
	private:
		
		
	public:
		Slime()
		{
			m_unit_id = 10;

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
		}
};
