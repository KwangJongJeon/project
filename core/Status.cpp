#include "Status.h"


// set status from file 
// Status::Status(std::istream& is)
// 	: 
// {}

Status::Status(std::map<Stat, int> status_in)
	: _status(status_in)
{}

int Status::get_status(const Stat& s) const
{
	return _status.at(s);
}

void Status::set_status(const Stat& s, int value)
{
	_status.at(s) = value;
}