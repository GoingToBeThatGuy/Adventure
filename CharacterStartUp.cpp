#include "stdafx.h"
#include "CharacterStartUp.h"
#include <iostream>

CharacterStartUp::CharacterStartUp() {
	int choice;
	std::cout << "Welcome to the game!\n\nYou new to the game (1) \nOr already have a character made(2)?";
	choice = validate(1, 2);
	switch (choice) {
	case 1:
		CharacterCreation();
		break;
	case 2:
		CharacterGetFile();
		break;
	}
}
void CharacterStartUp::CharacterCreation() {
	std::string Name, Race, Class, Background, Prompt;
	Prompt = "Whats your name?";
	std::cout << Prompt << std::endl;
	Name = Confirm(Prompt, Name);

}

void CharacterStartUp::CharacterGetFile() {

}