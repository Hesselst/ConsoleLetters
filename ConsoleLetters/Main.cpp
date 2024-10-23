#include <iostream>
#include <string>
#include <windows.h>

#include "Main.h"

int main()
{
	// This part is just for changing the console's color (;
	int consoleColor = ReturnConsoleColor();
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, consoleColor);

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

int ReturnConsoleColor()
{
	bool loopIsRunning = true;
	std::string changeColorInput;
	int changeColor;

	while (loopIsRunning)
	{

		std::cout << "Do you want to change the color of the console? y/n" << std::endl;
		std::getline(std::cin, changeColorInput);

		changeColorInput = std::tolower(changeColorInput);

		if (changeColorInput == "y")
		{
			try
			{
				std::cout << "What color do you want the console to be?\n1 = Darkblue\n2 = Dark green\n3 = Dark cyan\n4 = Dark red\n5 = Dark purple\n6 = Dark yellow\n7 = Dark white ? ? ?\n8 = Dark grey\n9 = bright blue\n10 = bright green\n11 = Bright cyan\n12 = Bright red\n13 = Bright purple\n14 = Bright yellow\n15 = Bright white\nIf you go over 15 the background color will change and i won't write all colors up to 255 so you will have to experiment with that yourself " << std::endl;
				std::getline(std::cin, changeColorInput);
				changeColor = std::stoi(changeColorInput);

				if (changeColor < 0 || changeColor > 255) 
				{
					std::cout << "Please enter a number between 0 and 255" << std::endl;
				}
				else {
					return changeColor;
				}
			}
			catch (...) 
			{
				std::cerr << "An unexpected error occurred.\n";
			}
			return changeColor;
		}
		else if (changeColorInput == "n")
		{
			loopIsRunning = false;
		}
		else
		{
			std::cout << "Please enter a valid number" << std::endl;
		}

	}
}

// Returns a string
std::string ReturnBlockLetter(char letter)
{
	// tolower function so i dont have to worry about capital letters
	letter = std::tolower(letter);

	// Better way of storing the letters
	std::string a[6][1];

	a[0][0] = "       ";
	a[1][0] = "       ";
	a[2][0] = "  __ _ ";
	a[3][0] = " / _` |";
	a[4][0] = "| (_| |";
	a[5][0] = " \\__,_|";

	std::string b[6][1];

	b[0][0] = " _     ";
	b[1][0] = "| |    ";
	b[2][0] = "| |__  ";
	b[3][0] = "| '_ \\ ";
	b[4][0] = "| |_) |";
	b[5][0] = "|_.__ /";

	std::string question[6][1];
	question[0][0] = " ___  ";
	question[1][0] = "|__ \\ ";
	question[2][0] = "   ) |";
	question[3][0] = "  / / ";
	question[4][0] = " |_|  ";
	question[5][0] = " (_)  ";

	// Just a check of letters below, will return the ascii art (not sure if ill finish this lool)

	// Also still have to make it so every letter gets printed after each other and not below each other
	if (letter == 'a')
	{
		return "a";
	}
	else if (letter == 'b')
	{
		return "b";
	}
	else
	{
		return "?";
	}
}