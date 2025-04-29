/*
BODMAS - Bracket Open Division Multipliction Addition Subtraction
These are the rules we follow to solve any mathematical expression containing these operators.

Similarly, C++ also has few types of operators:

* 1. Arithmetic Operators
    a. Unary: Needs only one operand

        i. ++ operator: Increments the variable by 1

            1. Pre-increment (++A):
                Ex.: A = 10;
                    B = ++A;    // A = 11, B = 11
                    # This means that first A will increment itself and then A will assign 11 (incremented value) to the variable B.
                    # A = 11, B = 11

            2. Post-increment (A++):
                Ex.: A = 10;
                    B = A++;    // A = 10, B = 10
                    # This means that first A will assign 10 (origin value) to the variable B and then A will increment itself
                    # A = 11, B = 10

        ii. -- operator: Decrements the variable by 1

            1. Pre-decrement (--A):
                Ex.: A = 10;
                    B = --A;    // A = 9, B = 9
                    # This means that first A will decrement itself and then A will assign 9 (decremented value) to the variable B.
                    # A = 9, B = 9

            2. Post-decrement (A--):
                Ex.: A = 10;
                    B = A--;    // A = 10, B = 10
                    # This means that first A will assign 10 (origin value) to the variable B and then A will decrement itself
                    # A = 9, B = 10

    b. Binary: +, -, *, /, %
        -> Needs two operands

    * NOTE *
    Precedence Order of Data Types : int < float < double
    So, 18/5 = 3 as both are int, so the result will also be int
    12.4/4 = 3.1 as between float and int, float has the higher precedence, so the result will also be float type
    12.6*3 = 37.8 as between float and int, float has the higher precedence, so the result will also be float type

    Precedence Order of Operators : {*, /, %} > {+, -}
    {*, /, %} -> these operators have the same level of priority, so then apply the Associativity rule, i.e., solve from left to right as the operators appear in the expression.
    {+, -} -> these operators have the same level of priority, so then apply the Associativity rule, i.e., solve from left to right as the operators appear in the expression.

* 2. Comparison Operator : {==, >, <, >=, <=, !=}
    returns either 0 (false) or 1 (true)

    * NOTE *
    Precedence Order of Operators: {>, <, >=, <=} > {==, !=}
    {>, <, >=, <=} -> these operators have the same level of priority, so then apply the Associativity rule, i.e., solve from left to right as the operators appear in the expression.
    {==, !=} -> these operators have the same level of priority, so then apply the Associativity rule, i.e., solve from left to right as the operators appear in the expression.

* 3. Logical Operator : {&&, ||, !}
    Precedence Order: {! > && > ||}

* 4. Bitwise Operator : {&, |, ^, ~, <<, >>}
    a. Bitwise AND (&):
        E.x.: 2 & 3 --binaryConversion--> 10 & 11 --bitByBitMultiplication--> 10 --inDecimal--> 2

    b. Bitwise OR (|):
        E.x.: 2 | 3 --binaryConversion--> 10 | 11 --bitByBitAddition--> 11 --inDecimal--> 3

    c. Bitwise EX-OR (^):
        If same bits (0^0), (1^1) then 0
        If different bits (0^1), (1^0) then 1
        E.x. 2 ^ 3 --binaryConversion--> 10 | 11 --bitByBitEX-OR--> 01 --inDecimal--> 1

    d. Bitwise NOT - Complement (~):
        Bitwise 1 ka 0 aur 0 ka 1
        E.x. 2 in binary (32-bit) = 00000000 00000000 00000000 00000010 --flipAll0&1--> 11111111 11111111 11111111 11111101 = Ans : To read this:
        --1sComplement--> 00000000 00000000 00000000 00000010 --2sComplement--> 00000000 00000000 00000000 00000011 = -3 (-ve sign because the MSB of the above Ans is 1)
        *Trick: ~X = -(X+1) without converting the decimal to binary
        e.g: ~5 = -(5+1) = -6

    e. Bitwise Left Shift (<<):
        Bitwise Shift bits towards left one by one
        E.x. 8<<1 --binaryConversion--> 0 0 0 0 1 0 0 0 --bitByBitShiftingToLeft--> 0 0 0 1 0 0 0 0 --inDecimal--> 16
        When shifting, new LSB = always 0 and MSB = always runs away
        *Trick: a<<k = a*2ᵏ without converting the decimal to binary
        e.g.: 8<<1 = 8*2¹ = 16

    f. Bitwise Right Shift (>>):
        Bitwise Shift bits towards right one by one
        E.x.: 6>>1 --binaryConversion--> 0 0 0 0 0 1 1 0 --bitByBitShiftingToRight--> 0 0 0 0 0 0 1 1 --inDecimal--> 3
        where, LSB will run away and MSB will stay as it is
        *Trick: a>>k = L (a/2ᵏ) ⅃ without converting the decimal to binary
        e.g.: 7>>1 = L 7/2¹ ⅃ = L 3.5 ⅃ = 3
        where L and ⅃ mein floor value

    Precedence Order: {<<, >>} > {&, |, ^}

* 5. Assignment Operators : {=, +=, -=, *=, /=, %=}
*/

/*
Precendence and Associativity Order of Operators (Highest to Lowest):
/ % *
+ -
<< >>
< <=
> >=
== !=
&
^
|
&&
||

*/

/*
* HOMEWORK:

1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.

2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

5: What will be the result below according to the precedence table.

    2*3-48==5/4*6
    6<<2-4*8/2
    5>4<3/2-8%4+5
    14-8+92>>2+70

*/
// 5. SOLUTION:
#include <iostream>
using namespace std;
int main()
{
    cout << (2 * 3 - 48 == 5 / 4 * 6) << endl;
    cout << (6 << 2 - 4 * 8 / 2) << endl; // garbage value
    cout << (5 > 4 < 3 / 2 - 8 % 4 + 5) << endl;
    cout << (14 - 8 + 92 >> 2 + 70) << endl;
    return 0;
}