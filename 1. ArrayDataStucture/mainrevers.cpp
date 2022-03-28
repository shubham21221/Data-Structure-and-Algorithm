#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;

    cout << "enter the number";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];   
        }
        temp=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=temp;
        cout<<"reverse number";
        for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }

    }
