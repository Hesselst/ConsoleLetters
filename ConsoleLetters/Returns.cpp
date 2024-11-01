#include "CommonIncludes.h"
#include "Returns.h"



// This function can also be combined with the GetArray function in BlockLetters.cpp

/*std::string Returns::ReturnLetter(char letter)
{
	// tolower function so i dont have to worry about capital letters
	letter = std::tolower(letter);

	// Return letters
	if (letter == 'a')
	{
		return "a";
	}
	else if (letter == 'b')
	{
		return "b";
	}
    else if (letter == ' ')
    {
        return " ";
    }
	else
	{
		return "que";
	}
}*/

int Returns::ReturnConsoleColor(void)
{
    bool loopIsRunning = true;
    std::string changeColorInput;
    int changeColor;

    while (loopIsRunning)
    {
        std::cout << "\nDo you want to change the color of the console? y/n" << std::endl;
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
                        << "Colors over 13 and below 255 will change your background color." << std::endl;
                    std::cout << "Please enter the number here: ";

                    std::getline(std::cin, changeColorInput);
                    // String to int function
                    changeColor = std::stoi(changeColorInput);

                    if (changeColor < 0 || changeColor > 255)
                    {
                        std::cout << "Please enter a number between 0 and 255" << std::endl;
                    }
                    else
                    {
                        innerLoopRunning = false;
                        loopIsRunning = false;
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