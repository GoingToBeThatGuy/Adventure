#pragma once
#include <iostream>
class Basic_Functions {

public:
	int validate(int minimum, int maximum);
	void ClearScreen();

	template <class Temp>
	Temp Confirm(std::string Prompt, Temp given);
};

template<class Temp>
inline Temp Basic_Functions::Confirm(std::string Prompt, Temp given)
{
	char choice;
	std::cout << "Confirm: " << given << "? (Y/N)" << std::endl;
	cin >> choice;
	switch (choice) {
	case 'Y':
		return given;
		break;
	case 'N':
		std::cout << Prompt << std::endl;
		return Confirm(Prompt, given);
		break;
	default:
		std::cout << "Incorrect answer, try again..." << std::endl << std::endl;
		std::cout << Prompt << std::endl;
		return Confirm(Prompt, given);
	}
	return Temp();
