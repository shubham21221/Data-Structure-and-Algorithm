#include <bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target)break;
            if(nums[i]>target)break;
            
        }
        return i;
    }


int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    cout<<searchInsert(v, 2);

}