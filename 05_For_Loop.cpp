// For Loop (Prime, Fibonacci, Factorial, Sum of n numbers): Already know

/*
* HOMEWORK:

1. Print number from 280 to 250 with the help of for loop.
2. Print char from ‘A’ to ‘Z’ with the help of a for loop.
3. Print char from ‘Z’ to ‘A’ with the help of a for loop.
4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
5. Print Sum of square of first n natural number.
6. Print Sum of cube of first n natural number
7. Print n’th Fibonacci number.
*/

// 4. SOLUTION:
#include <iostream>
using namespace std;
int main()
{
    int firstNo = 220, commonDiff = 7, lastNo = 730;
    for (int i = firstNo; i <= lastNo; i += commonDiff)
        cout << i << "  ";
    return 0;
}