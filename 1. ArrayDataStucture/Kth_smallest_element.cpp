#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
//User function template for C++
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n= r+1;
        sort(arr,arr+n);
        return arr[k-1];
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.kthSmallest(a, 0, n-1, k)<<endl;
    }
    return 0;
}