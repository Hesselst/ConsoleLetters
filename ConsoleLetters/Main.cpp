#include "Main.h"

BlockLetters gBlockLetters;
Returns returns;

int main()
{
    bool mainLoopRunning = true;
    char confirm = 'x';

    while (mainLoopRunning)
    {
        MainLoop();
        std::cout << "Do you want to use the program again? (y/n)" << std::endl;
        std::cin >> confirm;

        if (confirm == 'y')
        {
            continue;
        }
        else if (confirm == 'n')
        {
            mainLoopRunning = false;
        }
        else
        {
            std::cout << "Please only enter y or n!" << std::endl;
        }
    }

	return 0;
}


void MainLoop()
{
    int consoleColor = returns.ReturnConsoleColor();
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, consoleColor);

    // Get the input from the user
    std::string input;
    std::cout << "Type a word that you want to be displayed in the console here: ";
    std::getline(std::cin, input);


    for (int j = 0; j < 6; j++) // rows 
    {
        for (char i : input)
        {
            std::string letter = returns.ReturnLetter(i);

            std::string& rLetter = letter;
            // TODO: Turn the .letter into a value with pointer or references

            // error C2297: '.*': not valid as right operand has type 'char'
            std::cout << gBlockLetters.rLetter[j][0];
            //std::cout << gBlockLetters.GetArray(rLetter, j); (CONCEPT)
        }
        std::cout << "\n"; // After all letters index number have been printed, new line
    }
}