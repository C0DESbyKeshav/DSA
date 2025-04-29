// * Geeks for Geeks Problem
// * You are given an Integer n. Return true if It is a Leap Year otherwise return false.

/* Solution: The superior condition is that if a number is divisible by 400 then don't look for anything else and declare that year as a leap year.
But if it isn't then check if the year is divisible by 4 and not divisible by 100 then it's a leap year.
And if none of the above conditions are met then the year is NOT a leap year.
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkYear(int n)
    {
        if (n % 400 == 0)
            return 1;
        else if (n % 4 == 0 && n % 100 != 0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Solution s;
    cout << s.checkYear(4) << endl;
    cout << s.checkYear(2021) << endl;
    cout << s.checkYear(2025) << endl;
    return 0;
}