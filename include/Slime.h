#include "Monster.h"

class Slime : public Monster
{
	private:
		
		
	public:
		Slime(Point ref_pos = Point(0, 0));
		
		virtual std::string stringForm() const override;
		
		virtual ~Slime()  override
		{
			
		}
};
