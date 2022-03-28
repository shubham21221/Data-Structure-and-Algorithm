// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
     void convertToWave(vector<int>& arr, int n){
       
       for(int i=0;i<n-1;i=i+2)
       {
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
       }
       
   }
};

// { Driver Code Starts.

int main()
{
        vector<int> arr={2,4,7,8,9,10};
         
        Solution ob;
        cout<<ob.convertToWave(arr, 6);

}  // } Driver Code Ends