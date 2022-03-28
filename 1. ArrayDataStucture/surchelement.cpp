#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int searchInsert(vector<int> &A, int target) {
      int n = A.size();
      if(n < 1) {
         return 0;
      }
      int low = 0;
      int high = n-1;
      
      int mid;
      int pos;
      while(low <= high) {
         mid = low + (high-low)/2;
         if(A[mid] == target) {
            return mid;
         }
         else if(A[mid] > target) {
            high = mid - 1;
            pos = mid;
         }
         else {
            low = mid + 1;
            pos = mid ;
         }
      }
      return pos;
   }
};
int main(){
   Solution ob;
   vector<int> v ;
   v.push_back(2);
   v.push_back(5);
   v.push_back(9);

   cout << ob.searchInsert(v,5);
}