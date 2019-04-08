#include <iostream>
#include "UserInput.h"

using namespace std;

int UserInput::getInput() {
	int ret = 0;
	while(true) {
		string input;
		cin >> input;
		if(input == "a") {
			ret = 75;
		} else if(input == "w") {
			ret = 80;
		} else if(input == "d") {
			ret = 77;
		} else if(input == "s") {
			ret = 72;
		}
		if(ret != 0) {
			break;
		}
	}
	return ret;
}