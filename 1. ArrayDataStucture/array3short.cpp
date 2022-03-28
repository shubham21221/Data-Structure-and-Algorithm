#include <iostream>
using namespace std;
//bubble sort
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j < n-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}