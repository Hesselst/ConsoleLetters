#include "Main.h"

static BlockLetters gBlockLetters;
static Returns gReturns;

int main()
{
    bool mainLoopRunning = true;
    std::string confirm;

    while (mainLoopRunning)
    {
        MainLoop();
        bool confirmLoopRunning = true;

        while (confirmLoopRunning)
        {
            std::cout << "Do you want to use the program again? (y/n)" << std::endl;
            std::getline(std::cin, confirm);

            // Convert input to lowercase
            for (auto& c : confirm)
            {
                c = std::tolower(c);
            }
            if (confirm == "y")
            {
                confirmLoopRunning = false;
            }
            else if (confirm == "n")
            {
                mainLoopRunning = false;
                confirmLoopRunning = false;
            }
            else
            {
                std::cout << "Please only enter y or n" << std::endl;
            }
        }
    }

    return 0;
}


void MainLoop(void)
{
    int consoleColor = gReturns.ReturnConsoleColor();
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
            //std::string letter = returns.ReturnLetter(i);

            gBlockLetters.GetArray(i, j);
        }
        std::cout << "\n"; // After all letters index number have been printed, new line
    }
}