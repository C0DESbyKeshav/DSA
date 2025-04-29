// * LeetCode Problem
// * Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
/*
class Solution {
public:
    int addDigits(int num) {

    }
};
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        int ans, q = num;
        while (q > 9)
        {
            ans = 0;
            while (q != 0)
            {
                ans += q % 10;
                q /= 10;
            }
            q = ans;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.addDigits(38) << endl;
    cout << s.addDigits(249) << endl;
    cout << s.addDigits(0) << endl;
    return 0;
}