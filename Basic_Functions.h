#pragma once
class Basic_Functions {

public:
	int validate(int minimum, int maximum);
	void ClearScreen();

	template <class Temp>
	Temp Confirm(std::string Prompt, Temp given);
};
