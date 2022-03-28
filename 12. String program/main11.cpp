#include <iostream.h>
using namespace std;
int main()
{
    int a = 40;
    int b = 20;
    int temp;
    cout << "Value of a (before swap): " << a << endl;
    cout << "Value of b (before swap): " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Value of a (after swap): " << a << endl;
    cout << "Value of b (after swap): " << b << endl;
    return 0;
}