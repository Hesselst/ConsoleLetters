#include "CommonIncludes.h"


// Struct because im only storing arrays
struct BlockLetters
{
    std::string a[6][1];
    std::string b[6][1];
    /* still have to add these ... 
    std::string c[6][1];
    std::string d[6][1];
    std::string e[6][1];
    std::string f[6][1];
    std::string g[6][1];
    std::string h[6][1];
    std::string i[6][1];
    std::string j[6][1];
    std::string k[6][1];
    std::string l[6][1];
    std::string m[6][1];
    std::string n[6][1];
    std::string o[6][1];
    std::string p[6][1];
    std::string q[6][1];
    std::string r[6][1];
    std::string s[6][1];
    std::string t[6][1];
    std::string u[6][1];
    std::string v[6][1];
    std::string w[6][1];
    std::string x[6][1];
    std::string y[6][1];
    std::string z[6][1];
    */

    // Que is for question mark, so if the letter is not recognized,
    // 
    // Maybe later i will add numbers and symbols too but probably not 
    std::string que[6][1];

    BlockLetters()
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
};