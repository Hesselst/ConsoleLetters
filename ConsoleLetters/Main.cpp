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

// Returns the color you want the console to be
int ReturnConsoleColor()
{
    bool loopIsRunning = true;
    std::string changeColorInput;
    int changeColor;

    while (loopIsRunning)
    {
        std::cout << "Do you want to change the color of the console? y/n" << std::endl;
        std::getline(std::cin, changeColorInput);

        // Convert input to lowercase
        for (auto& c : changeColorInput)
        {
            c = std::tolower(c);
        }

        if (changeColorInput == "y")
        {
            bool innerLoopRunning = true;
            while (innerLoopRunning)
            {
                try
                {
                    std::cout << "What color do you want the console to be?\n"
                        << "1 = Darkblue\n2 = Dark green\n3 = Dark cyan\n4 = Dark red\n"
                        << "5 = Dark purple\n6 = Dark yellow\n7 = Dark white\n8 = Dark grey\n"
                        << "9 = Bright blue\n10 = Bright green\n11 = Bright cyan\n12 = Bright red\n"
                        << "13 = Bright purple\n14 = Bright yellow\n15 = Bright white\n"
                        << "If you go over 15, the background color will change. "
                        << "Experiment with that yourself up to 255." << std::endl;

                    std::getline(std::cin, changeColorInput);
                    // String to int function
                    changeColor = std::stoi(changeColorInput);

                    if (changeColor < 0 || changeColor > 255)
                    {
                        std::cout << "Please enter a number between 0 and 255" << std::endl;
                    }
                    else
                    {
                        return changeColor;
                    }
                }
                // Error handling catch the errors here
                catch (const std::invalid_argument&)
                {
                    std::cerr << "Invalid input. Please enter a number.\n" << std::endl;
                }
                catch (const std::out_of_range&)
                {
                    std::cerr << "Please enter a number between 0 and 255.\n" << std::endl;
                }
                catch (...)
                {
                    std::cerr << "An unexpected error occurred.\n";
                }
            }
        }
        else if (changeColorInput == "n")
        {
            loopIsRunning = false;
        }
        else
        {
            std::cout << "Please enter only y or n\n" << std::endl;
        }
    }

    // -1 because no color change
    return -1;
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