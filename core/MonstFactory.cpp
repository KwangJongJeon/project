#include "MonstFactory.h"

Monster MonstFactory::createMonst(std::string name)
{
	using namespace std;
	
	ifstream ifs("Monsters");
	
	if(!ifs)
	{
		cerr << "Cannot open File" << endl;
	}	
}