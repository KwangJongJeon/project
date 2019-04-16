#include "MovableUnit.h"
#include "Board.h"

class BoundUnit : public I_Unit
{
	public:
		BoundUnit(const MovableUnit& unit_in, const std::pair<int, int> border_in)
			: _movable_unit(unit_in), _border(border_in) {}
			
		virtual void move(const int& dx_in, const int& dy_in);
		
	private:
		MovableUnit _movable_unit;
		std::pair<int, int> _border;
}