class Player : public Unit
{
	private:
		
	public:
		Player()
		{
			m_max_hp = 50;
			m_hp = m_max_hp;
			m_ATK = 6;
			m_DEF = 2;
			m_level = 1;
		}

};
