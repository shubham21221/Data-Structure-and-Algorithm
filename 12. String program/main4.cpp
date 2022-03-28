#include <iostream>
#include <conio.h>
#define SWAP(a, b) \
    {              \
        int temp;  \
        temp = a;  \
        a = b;     \
        b = temp;  \
    }
using namespace std;
int main()
{
    int x, y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    cout<<"Before swap"<<endl;
    cout << "x=" << x << " y=" << y;
    SWAP(x, y);
    cout<<"After swap"<<endl;
    cout << "\nx=" << x << " y=" << y;
    return 0;
}