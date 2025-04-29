/*
* Decimal to Binary:
Use ......32 16 8 4 2 1 or use the division method.

* Binary to Decimal:
..... 4096   2048   1024   512   256   128   64    32    16    8     4     2     1
..... 2¹²    2¹¹    2¹⁰    2⁹    2⁸    2⁷    2⁶    2⁵    2⁴    2³    2²    2¹    2⁰
OR
Multiply each digit of the octal number by 10 to the power of the weight of that digit's place.

* Decimal to Octal:
Keep dividing the decimal number by 8 until the quotient is 0 and write the remainders obtained from bottom to top.

* Octal to Decimal:
Multiply each digit of the octal number by 8 to the power of the weight of that digit's place.

* Decimal to Hexa:
Keep dividing the decimal number by 16 until the quotient is 0 and write the remainders obtained from bottom to top.

* Hexa to Decimal:
Multiply each digit of the octal number by 16 to the power of the weight of that digit's place.

* For any indirect conversions, use these above basic conversions and convert from one system to another step by step.
*/

// * FORMULA TO JOIN DIFFERENT DIGITS IN REVERSE ORDER: {ans = rem * 10ⁱ + ans}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// * Decimal to any Number System
void decToX(int n, int base)
{
    int q = n, ans = 0, j = 0;
    char res[50];

    if (base == 16)
    {
        for (int i = 0; q != 0; i++)
        {
            int rem = q % base;
            if (rem >= 10)
                res[i] = (rem + 55); // 65(A) - 10 = 55
            else
                res[i] = (rem + 48); // 48 = ASCII for '0'
            q /= base;
            j++;
        }
        for (int i = j - 1; i >= 0; i--)
            cout << res[i];
    }
    else
    {
        for (int i = 0; q != 0; i++)
        {
            ans += ((q % base) * pow(10, i));
            q /= base;
        }
        cout << ans;
    }
}

// * Any Number System to Decimal
int xToDec(string n, int base)
{
    int ans = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == 'A' || n[i] == 'a')
            // ans += (10) * pow(base, n.length() - (i + 1)) * pow(10, n.length() - (i + 1));
            ans += (10) * pow(base, n.length() - (i + 1));
        else if (n[i] == 'B' || n[i] == 'b')
            ans += (11) * pow(base, n.length() - (i + 1));
        else if (n[i] == 'C' || n[i] == 'c')
            ans += (12) * pow(base, n.length() - (i + 1));
        else if (n[i] == 'D' || n[i] == 'd')
            ans += (13) * pow(base, n.length() - (i + 1));
        else if (n[i] == 'E' || n[i] == 'e')
            ans += (14) * pow(base, n.length() - (i + 1));
        else if (n[i] == 'F' || n[i] == 'f')
            ans += (15) * pow(base, n.length() - (i + 1));
        else
            ans += (n[i] - 48) * pow(base, n.length() - (i + 1));
    }
    return ans;
}

int main()
{
    int choice;

    while (1)
    {
        cout << endl
             << "==================== MAIN MENU ====================" << endl;
        cout << "1. Decimal to Binary" << endl;
        cout << "2. Decimal to Octal" << endl;
        cout << "3. Decimal to Hexa-Decimal" << endl;
        cout << "4  Binary to Decimal" << endl;
        cout << "5  Binary to Octal" << endl;
        cout << "6  Binary to Hexa-Decimal" << endl;
        cout << "7. Octal to Decimal" << endl;
        cout << "8. Octal to Binary" << endl;
        cout << "9. Octal to Hexa-Decimal" << endl;
        cout << "10. Hexa-Decimal to Decimal" << endl;
        cout << "11. Hexa-Decimal to Binary" << endl;
        cout << "12. Hexa-Decimal to Octal" << endl;
        cout << "13. EXIT" << endl;
        cout << "===================================================" << endl
             << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Decimal to Binary
        {
            int n;

            cout << endl
                 << "Enter a Decimal number: ";
            cin >> n;

            cout << "( " << n << " )10 = ( ";
            decToX(n, 2);
            cout << " )2" << endl
                 << endl;

            break;
        }

        case 2: // Decimal to Octal
        {

            int n;

            cout << endl
                 << "Enter a Decimal number: ";
            cin >> n;

            cout << "( " << n << " )10 = ( ";
            decToX(n, 8);
            cout << " )8" << endl
                 << endl;
            break;
        }

        case 3: // Decimal to Hexa-Decimal
        {
            int n;

            cout << endl
                 << "Enter a Decimal number: ";
            cin >> n;

            cout << "( " << n << " )10 = ( ";
            decToX(n, 16);
            cout << " )16" << endl
                 << endl;
            break;
        }

        case 4: // Binary to Decimal
        {
            string n;

            cout << endl
                 << "Enter a Binary number: ";
            cin >> n;

            cout
                << "( " << n << " )2 = ( " << xToDec(n, 2) << " )10" << endl
                << endl;
            break;
        }

        case 5: // Binary to Octal
        {
            string n;

            cout << endl
                 << "Enter a Binary number: ";
            cin >> n;

            cout
                << "( " << n << " )2 = ( ";
            decToX(xToDec(n, 2), 8);
            cout << " )8" << endl
                 << endl;
            break;
        }

        case 6: // Binary to Hexa-Decimal
        {
            string n;

            cout << endl
                 << "Enter a Binary number: ";
            cin >> n;

            cout
                << "( " << n << " )2 = ( ";
            decToX(xToDec(n, 2), 16);
            cout << " )16" << endl
                 << endl;
            break;
        }

        case 7: // Octal to Decimal
        {
            string n;

            cout << endl
                 << "Enter an Octal number: ";
            cin >> n;

            cout
                << "( " << n << " )8 = ( " << xToDec(n, 8) << " )10" << endl
                << endl;
            break;
        }

        case 8: // Octal to Binary
        {
            string n;

            cout << endl
                 << "Enter an Octal number: ";
            cin >> n;

            cout
                << "( " << n << " )8 = ( ";
            decToX(xToDec(n, 8), 2);
            cout << " )2" << endl
                 << endl;
            break;
        }

        case 9: // Octal to Hexa-Decimal
        {
            string n;

            cout << endl
                 << "Enter an Octal number: ";
            cin >> n;

            cout
                << "( " << n << " )8 = ( ";
            decToX(xToDec(n, 8), 16);
            cout << " )16" << endl
                 << endl;
            break;
        }

        case 10: // Hexa-Decimal to Decimal
        {
            string n;

            cout << endl
                 << "Enter a Hexa-Decimal number: ";
            cin >> n;

            cout
                << "( " << n << " )16 = ( " << xToDec(n, 16) << " )10" << endl
                << endl;
            break;
        }

        case 11: // Hexa-Decimal to Binary
        {
            string n;

            cout << endl
                 << "Enter a Hexa-Decimal number: ";
            cin >> n;

            cout
                << "( " << n << " )16 = ( ";
            decToX(xToDec(n, 16), 2);
            cout << " )2" << endl
                 << endl;
            break;
        }

        case 12: // Hexa-Decimal to Octal
        {
            string n;

            cout << endl
                 << "Enter a Hexa-Decimal number: ";
            cin >> n;

            cout
                << "( " << n << " )16 = ( ";
            decToX(xToDec(n, 16), 8);
            cout << " )8" << endl
                 << endl;
            break;
        }

        case 13:
            goto EXIT;

        default:
            cout << "Please enter a valid choice." << endl
                 << endl;
            break;
        }
    }
EXIT:

    return 0;
}

//* LIMITATIONS: (This could be resolved with more time available)
/*
1. Floating point conversions are not covered in this program.
2. If the result of the conversion is a binary number and if it is long then the program throws a garbage negative number.
3. The program will sometime crash in between if running for long time due to the use of goto label.
4. This code might not be the optimized one but I am satisfied as it is created purely out of my raw logic.
*/