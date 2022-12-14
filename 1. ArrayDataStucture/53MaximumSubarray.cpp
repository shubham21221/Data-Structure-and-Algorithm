#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector <int>& nums) {
        int n=nums.size();
        int i;
        int sum=0;
        int maxi=INT_MIN;
        
        if(n==0)
            return 0;
    
        for(i=0;i<n;i++)
        {
            sum=sum+nums[i];
            if(sum>maxi)
                maxi=sum;
                if(sum<=0)
                    sum=0;
        }
        return maxi;
    }
};
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    cout<<obj.maxSubArray(nums);
    return 0;
}