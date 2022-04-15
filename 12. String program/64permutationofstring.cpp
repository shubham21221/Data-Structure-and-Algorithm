#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums ,vector<vector<int>>& ans ,int i){
        if(i>=nums.size()){
        ans.push_back(nums);
            return;
            }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(nums,ans,i+1);
            //backtrack
            swap(nums[i],nums[j]);
        }
}
    
public:
void permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        solve(nums,ans,i);
        return ans;
    }
};

int main(){
	    string nums;
	    cin >> nums;
	    Solution ob;
	    vector<int> ans = ob.permute(nums);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    
	return 0;
}