#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, n, s = 0;
    cout << "enter the number";
    cin >> n;
    for (i = 1; i < n / 2; i++)
        if (n % i == 0)
            s += i;
    if (s == n)
        cout << "the number is perfect no";
    else
        cout << "the number is not perfect ";
    return 0;
}