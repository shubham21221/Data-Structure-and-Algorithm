#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    //printing subarray logic
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <=j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
    }
    return 0;
}