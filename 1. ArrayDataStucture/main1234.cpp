#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = k+1; i <n; i++){
        cout << arr[i] << " ";
    }
    for (int i = 0; i <= k; i++){
        cout << arr[i] << " ";
    }
    return 0;
}