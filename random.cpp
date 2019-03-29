#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> // std::time()
#include <random>

int get_random_number(const int& min, const int& max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

