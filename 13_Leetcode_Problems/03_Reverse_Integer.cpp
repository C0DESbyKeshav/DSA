// * Leetcode Problem
// * Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// SOLUTION: FORMULA TO REVERSE A NUMBER DIGITS IN REVERSE ORDER: {ans = ans * 10 + rem}
// For overflow condition, ans*10 is producing a very big number to overflow, so, we will have to calculate the formula for the ans.
// if (ans * 10 + rem > INT_MAX) then its overflow
// ans > (INT_MAX - rem) / 10
// ans > (INT_MAX/10 - rem/10)
// Since, rem will always be between 0 to 9 and dividing 0 to 9 by 10 will always give 0 as we are talking about the integers and not the floating point numbers.
// So, rem will be ignored as its value is always going to be 0
// So, final overflow condition will be ans > (INT_MAX/10)
// Same for the underflow condition

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        while (x != 0)
        {
            if (ans > (INT_MAX / 10) || ans < (INT_MIN / 10))
                return 0;
            ans = (ans * 10) + (x % 10);
            x /= 10;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.reverse(1234) << endl;
    return 0;
}