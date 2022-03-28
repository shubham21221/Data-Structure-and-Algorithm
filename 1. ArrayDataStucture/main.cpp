#include <bits/stdc++.h>
using namespace std;

int getmin(int num[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);

        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;
}
int getmax(int num[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);

        //   if(num[i]>max){
        //       max = num[i];
        //   }
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Mix value is" << getmax(num, n) << endl;
    cout << "min value is" << getmin(num, n) << endl;

    return 0;
}