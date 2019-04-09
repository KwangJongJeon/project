#include "Hand.h"

class Shortsword : public Hand
{
	private:
	
	public:
		Shortsword()
		{
			set_item_name("Shortsword");
			set_equipment_ATK(5);
		}
		
		virtual std::ostream& print(std::ostream& out) const override
		{
			std::cout << "Hands: " << get_item_name() << std::endl;
			return out;
		}
};