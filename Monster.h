class Monster : public Unit
{
	private:
		int m_giveExp; // if player kill monsters, take this exp from monster
		
	public:
		void attack(Unit& player);
}
