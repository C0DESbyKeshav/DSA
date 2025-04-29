// While Loop
// Do-while loop
// Break
// Continue
// Switch
// Scope of a variable

// * HOMEWORK:
/*
1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

2: Find the factorial of a number n using a while loop and do a while loop.

3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    // 3. SOLUTION:
    for (; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            continue;
        cout << i << endl;
    }

    // 6. SOLUTION:
    bool isPrime;
    if (n > 1)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
                continue;
            }
        }
    }
    else
        isPrime = false;

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}