#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 4; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
}