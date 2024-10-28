#include "CommonIncludes.h"
#include "BlockLetters.h"

BlockLetters::BlockLetters(void)
{
    a[0][0] = "       ";
    a[1][0] = "       ";
    a[2][0] = "  __ _ ";
    a[3][0] = " / _` |";
    a[4][0] = "| (_| |";
    a[5][0] = " \\__,_|";

    b[0][0] = " _     ";
    b[1][0] = "| |    ";
    b[2][0] = "| |__  ";
    b[3][0] = "| '_ \\ ";
    b[4][0] = "| |_) |";
    b[5][0] = "|_.__ /";

    que[0][0] = " ___  ";
    que[1][0] = "|__ \\ ";
    que[2][0] = "   ) |";
    que[3][0] = "  / / ";
    que[4][0] = " |_|  ";
    que[5][0] = " (_)  ";
}

void BlockLetters::GetArray(char inputLetter, int index)
{
    if (inputLetter == 'a')
    {
        std::cout << a[index][0];
    }
    else if (inputLetter == 'b')
    {
        std::cout << b[index][0];
    }
    else if (inputLetter == ' ')
    {
        std::cout << "       ";
    }
    else
    {
        std::cout << que[index][0];
    }
}