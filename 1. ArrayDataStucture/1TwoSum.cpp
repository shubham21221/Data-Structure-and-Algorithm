#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int> &num, int target)
{
    unordered_map<int, int> mp;

    vector<int> res;

    for (int i = 0; i < num.size(); i++)
    {
        if (mp.find(target - num[i]) != mp.end() && i != mp[target - num[i]])
        {
            res.push_back(i);
            res.push_back(mp[target - num[i]]);
            break;
        }
    }
    return res;
}
};

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);

    Solution obj;
    obj.twoSum(v,1);

    return 0;
}