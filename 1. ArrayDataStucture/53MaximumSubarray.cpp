#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector <int>& nums) {
        int n=nums.size();
        int i;
        int s=0;
        int maxi=INT_MIN;
        
        if(n==0)
            return 0;
    
        for(i=0;i<n;i++)
        {
            s=s+nums[i];
            if(s>maxi)
                maxi=s;
                if(s<=0)
                    s=0;
        }
        return maxi;
    }
};
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    cout<<obj.maxSubArray(nums);
    }