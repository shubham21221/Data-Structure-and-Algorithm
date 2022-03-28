#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char ch;
    cout << "enter a string :";
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            putchar(ch + 32);
        else if (ch >= 'a' && ch <= 'z')
            putchar(ch - 32);
        else
            putchar(ch);
    }
    cout << "is the string";
    return 0;
}