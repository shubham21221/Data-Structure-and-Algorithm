#include <iostream>
using namespace std;
int main(){
    
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[n];
}
int pr[n];
pr[0]=arr[0];
for (int i = 0; i < n; i++)
{
    pr[i]=pr[i-1]+arr[i];
}


return 0;
}