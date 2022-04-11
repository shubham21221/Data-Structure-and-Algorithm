#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
     sort(arr,arr+n);
     
     int low = 0;
     int high = n-1;
     int count=0;
     
     while(low<high){
         if(arr[low]+arr[high]==k){
         low++;
         high--;
         count++;
         }
     }
     return count;
    }
};

int main() {
    
        int n, k;
        cin >> n ;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    
    return 0;
} 