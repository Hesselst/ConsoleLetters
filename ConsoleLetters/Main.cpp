#include <iostream>
#include <string>
#include <windows.h>

#include "Main.h"

int main()
{
	// This part is just for changing the console's color (;

	// Change int k to whatever color you want
	int k = 2;
	/*
	1 = Dark blue
	2 = Dark green
	3 = Dark cyan
	4 = Dark red
	5 = Dark purple
	6 = Dark yellow
	7 = Dark white ???
	8 = Dark grey
	9 = bright blue
	10 = bright green
	11 = Bright cyan
	12 = Bright red
	13 = Bright purple
	14 = Bright yellow
	15 = Bright white

	If you go over 15 the background color will change and i won't write all colors up to 255 so you will have to experiment 
	with that yourself 
	*/
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, k);

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