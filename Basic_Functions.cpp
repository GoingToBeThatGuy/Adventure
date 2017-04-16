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
