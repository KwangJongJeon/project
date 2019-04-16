#pragma once
#include <utility>

class I_Unit {
	public:
		virtual void move(const int& dx_in, const int& dy_in) = 0;
		virtual ~I_Unit() {};
};