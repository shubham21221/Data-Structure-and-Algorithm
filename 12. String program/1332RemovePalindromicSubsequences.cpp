#include <iostream.h>
using namespace std;

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int i = 0;
        int j = s.size() - 1;

        if (s.size() == 0)
        {
            return 1;
        }
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
                return 2;
        }
        return 1;
    }
};

int main()
{
    // string s="ababa";
    Solution obj;
    cout << obj.removePalindromeSub("akiugy");
}