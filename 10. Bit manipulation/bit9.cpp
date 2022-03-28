#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 0; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    for (char c = 'A'; c < 'E'; ++c)
    {
        cout << c << endl;
        // printBinary(int(c));
    }
    for (char c = 'a'; c < 'e'; ++c)
    {
        cout << c << endl;
        // printBinary(int(c));
    }
}