#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Linear search logic
    int data;
    cin >> data;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << -1;
    }
    else
    {
        cout << index;
    }
}