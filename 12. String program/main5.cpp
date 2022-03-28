#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int r, b, c, d, tot, avg;
    cout << "ENTER STUDENT ROLL NO ; " << endl;
    cin >> r;
    cout << "ENTER FIRST SUBJECT MARKS ;" << endl;
    cin >> b;
    cout << "ENTER SECOND SUBJECT MARKS;" << endl;
    cin >> c;
    cout << "ENTER THIRD SUBJECT MARKS ;" << endl;
    cin >> d;
    tot = b + c + d;
    avg = tot / 3;
    cout << " Lovely Professional University \n\n";
    cout << "\t STUDENT RNO :" << r << endl;
    cout << "\t FIRST SUBJECT MARKS :" << b << endl;
    cout << "\t SECOND SUBJECT MARKS :" << c << endl;
    cout << "\t THIRD SUBJECT MARKS :" << d << endl;
    cout << "\t AVERAGE MARKS :" << avg << endl;
return 0;
}