#include "stdafx.h"
#include "Basic_Functions.h"
#include <iostream>

int Basic_Functions::validate(int minimum, int maximum) {
	int given;

	while (!(std::cin >> given) || !(given >= minimum && given <= maximum)) {
		std::cout << "Incorrect Value! Try again!! \n\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return given;
}

void Basic_Functions::ClearScreen() {
	for (int x = 1; x < 9000; x++) { //less than 10000
		std::cout << x << std::endl;
	}
}
template <class Temp>
Temp Basic_Functions ::Confirm(std::string Prompt, Temp given) {
	char choice;
	std::cout << "Confirm: " << given << "? (Y/N)" << std::endl;
	cin >> choice;
	switch choice{
	case 'Y':
		return given;
		break;
	case 'N':

	}
}