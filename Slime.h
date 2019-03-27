class Slime : public Unit
{
	private:
		
		
	public:
		Slime()
		{
			m_max_hp(30);
			m_hp = m_max_hp;
			
			m_max_mp(0);
			m_mp = m_max_mp;
			
			m_ATK = 4;
			m_DEF = 1;
			m_Level = 1;
			m_unit_id = 10;
		}
};
