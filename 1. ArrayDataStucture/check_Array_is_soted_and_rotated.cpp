// Chack array is stoted and rotated array True or False

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> nums){
    int count =0;
    int n = nums.size();

    for(int i=0;i<n;i++){
        if(nums[i-1]>nums[i])
            count++;
    
    if(nums[n-1]>nums[0])
    count++;
    
    }
    return count<=1;
}
void print(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(2);

    vector<int> ans = check(nums);
    print(ans);
}