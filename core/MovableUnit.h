#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "I_Unit.h"
#include "I_Attackable.h"
#include "Status.h"
// #include "Stat.h" later.

class MovableUnit : public I_Unit, public I_Attackable
{
	public:
		
		MovableUnit(const int& x_in = 0, const int& y_in = 0, std::pair<int, int> board_in = std::make_pair(0, 0));
		
		MovableUnit(std::vector<MovableUnit*>& units_in, const int& x_in = 0, const int& y_in = 0, std::pair<int, int> board_in = std::make_pair(0, 0));
		
		MovableUnit(Status status_in, const int& x_in = 0, const int& y_in = 0, std::pair<int, int> board_in = std::make_pair(0, 0));
			
		// MovableUnit(Status status_in, std::vector<MovableUnit*>& units_in, const int& x_in = 0, const int& y_in = 0, std::pair<int, int> board_in = std::make_pair(0, 0));
		
		virtual void move(const int& dx_in, const int& dy_in) override;
		virtual void attack(I_Attackable& enemy) override;
		virtual void reduceHP(int damage) override;
		
		std::pair<int, int> get_pos() const;
		std::string 		get_string_form() const;
		int 				get_hp() const;
		int 				get_status(const Stat& s) const;
		Status 				get_status_all() const; // get status all
		std::string			get_unit_type() const;
		
		int calculate_damage(const int& damage);
		
		// board will be managed from game class
		void set_board(std::vector<MovableUnit*>& board_in);
		
		
	
	
		friend bool operator == (const MovableUnit& m1,const MovableUnit& m2)
		{
			return m1._cur_pos == m2._cur_pos;
		}
		
		friend std::ostream& operator << (std::ostream& out, MovableUnit &m)
		{
			out << "x: " <<  m.get_pos().first << 
				   "y: " << m.get_pos().second << std::endl;
			return out;
		}
		
		virtual ~MovableUnit(){}
	
	private:
	 	std::vector<MovableUnit*> get_enemies();
		
		std::pair<int, int> _cur_pos;
		std::pair<int, int> _board;
		std::pair<int, int> _cur_move;
	
		std::vector<MovableUnit*> _units;
		Status _status;
		
};