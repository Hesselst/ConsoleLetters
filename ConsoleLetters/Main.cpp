#include <iostream>
#include <string>

#include "Main.h"

int main()
{
	// Get the input from the user
	std::string input;
	std::cout << "Type a word that you want to be displayed in the console here: ";
	std::getline(std::cin, input);

	// Loop trough each letter of the input and make it print whatever returnblockletter function returns
	for (char i : input)
	{
		std::cout << ReturnBlockLetter(i) << std::endl;
	}

	return 0;
}

// Returns a string
std::string ReturnBlockLetter(char letter)
{
	// tolower function so i dont have to worry about capital letters
	letter = std::tolower(letter);

	// Just a check of letters below, will return the ascii art (not sure if ill finish this lool)

	// Also still have to make it so every letter gets printed after each other and not below each other
	if (letter == 'a')
	{
		return (
			"  __ _\n"
			" / _` |\n"
			"| (_| |\n"
			" \\\__,_|\n" // make sure to write \ like \\\ if you want them to be printed
			);
	}
	else if (letter == 'b')
	{
		return (
			"_\n"
			"| |\n"
			"| |__\n"
			"| '_ \\\ \n"
			"| |_) |\n"
			"|_.__ /\n"
			);
	}
	else
	{
		return (
			" ___\n"
			"|__ \\\ \n"
			"   ) |\n"
			"  / / \n"
			" |_|  \n"
			" (_)  \n"
      
      
			);
	}
}