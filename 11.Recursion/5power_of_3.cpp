#include <bits/stdc++.h>
using namespace std;

class Solution{
    bool isPowerOfTow(int n){
        if (n == 1)
            return true;
        if (n <= 0 || n % 2 != 0)
            return false;
        return isPowerOfTow(n / 2);
    }
    bool isPowerOfThree(int n){
        if(n==1)
        return true;
        if(n<=0 || n%2 != 0)
        return false;
        return isPowerOfThree(n/3);
    }
    bool isPowerOfFour(int n){
        if(n==1)return true;
        if(n<=0 || n%4!=0) return false;
        return isPowerOfFour(n/4)
    }
};


int main()
{
    int n;
    bool result;
    cin >> n;
    Solution obj;

    result = isPowerOfTow(n);
    cout << n << "=" << result;
    return 0;
}