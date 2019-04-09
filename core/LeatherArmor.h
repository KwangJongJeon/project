#include "Armor.h"

class LeatherArmor : public Armor
{
	private:
		
	public:
		LeatherArmor()
		{
			set_item_name("LeatherArmor");
			set_equipment_DEF(4);
		}
		
		virtual std::ostream& print(std::ostream& out) const override
		{
			std::cout << "Armor: " << get_item_name() << std::endl;
			return out;
		}
	
}