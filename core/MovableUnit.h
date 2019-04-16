#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "I_Unit.h"
#include "I_Attackable.h"
// #include "Stat.h" later.

class MovableUnit : public I_Unit, public I_Attackable
{
	public:
		
		MovableUnit(const int& x_in = 0, const int& y_in = 0, std::pair<int, int> board_in = std::make_pair(0, 0));
		
		MovableUnit(std::vector<MovableUnit*>& units_in, const int& x_in = 0, const int& y_in = 0, std::pair<int, int> board_in = std::make_pair(0, 0));
		
		virtual void move(const int& dx_in, const int& dy_in) override;
		virtual void attack(I_Attackable& enemy) override;
		virtual void reduceHP(int damage) override;
	
		const int& get_hp() const;
	
	
	
		friend bool operator == (const MovableUnit& m1,const MovableUnit& m2)
		{
			return m1._cur_pos == m2._cur_pos;
		}
		
		friend std::ostream& operator << (std::ostream& out, MovableUnit &m)
		{
			out << "(" << m._cur_pos.first << ", " <<  m._cur_pos.second << ")" << std::endl;
			return out;
		}
		
		virtual ~MovableUnit() 
		{}
	
	private:
	 	std::vector<MovableUnit*> get_enemies();
		
		std::pair<int, int> _cur_pos;
		std::pair<int, int> _board;
		std::pair<int, int> _cur_move;
	
		std::vector<MovableUnit*> _units;
		int _hp; 
		int _ATK;
};