#include "Status.h"


using std::string;
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

string Status::get_string_form() const {
	if(_units_string_form == "") {
		std::cout << "error!";
	}
	else {
		return _units_string_form;
	}
}

void Status::set_string_form(string form_in) {
	_units_string_form = form_in;
}

void Status::set_unit_type(string type_in) {
	_units_type = type_in;
}

string Status::get_unit_type() const {
	if(_units_type == "") {
		std::cout << "error!";
	}
	else {
		return _units_type;
	}
}