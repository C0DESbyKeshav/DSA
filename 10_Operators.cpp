/*
BODMAS - Bracket Open Division Multipliction Addition Subtraction
These are the rules we follow to solve any mathematical expression containing these operators.

Similarly, C++ also has few types of operators:

1. Arithmetic Operators
    a. Unary: Needs only one operand
        i. ++ operator: Increments the variable by 1
            1. Pre-increment (++a):
                Ex.: a = 10;
                    b = ++a;    
                    / This means that
            2. Post-increment (a++):
        
        ii. -- operator: Decrements the variable by 1
            1. Pre-decrement (--a):
            2. Post-decrement (a--):

    b. Binary: +, -, *, /, %
        -> Needs two operands
*/

/*
Precedence Order of Data Types : int < float < double
So, 18/5 = 3 as both are int, so the result will also be int
12.4/4 = 3.1 as between float and int, float has the higher precedence, so the result will also be float type
12.6*3 = 37.8 as between float and int, float has the higher precedence, so the result will also be float type
*/

/*
Precedence Order of Operators : {*, /, %} > {+, -}
{*, /, %} -> these operators have the same level of priority, so then apply the Associativity rule, i.e., solve from left to right as the operators appear in the expression.
{+, -} -> these operators have the same level of priority, so then apply the Associativity rule, i.e., solve from left to right as the operators appear in the expression.
*/