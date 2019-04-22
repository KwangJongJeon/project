#include <iostream>
#include "UserInput.h"

using namespace std;

int UserInput::getInput() {
	int ret = 0;
	while(true) {
		string input;
		cin.clear();
		cin >> input;
		if(input == "a") {
			ret = 75;
			break;
		} else if(input == "w") {
			ret = 80;
			break;
		} else if(input == "d") {
			ret = 77;
			break;
		} else if(input == "s") {
			ret = 72;
			break;
		} else {
			cout << "choose between a,s,d,w please" << endl;
			cout << "Press any key: ";
		}
	}
	return ret;
}