// cin --> used to accept input from the user

/*
Ek type ke data ko dusre data type mein store karaana --> Typecasting
E.g.:
int a = 10;
char b = 'k';
a = b;      // Here, both the variables a and b are of different data types so when we try to assign the char value 'k' to the integer variable a, the ASCII value of 'k' i.e. 107 gets stored in variable a.
cout<<a;    // Output: 107

Similarly jaise maine char ki value ko int mein typecast karvaaya same waise hi mai int ki value bhi char mein typecast karvaa sakta hu.
In that case, int variable mein jo num hoga woh jab char mein jaayega toh uss number uska ASCII equivalent character store ho jaayega in char variable.
E.g.:
int a = 65;
char b = 'k';
b = a;      // b = 65 = 'A'
cout<<b;    // Output: A
*/

/*
int ka size = 32 bits
char ka size = 8 bits
So, there is a high change of data loss or gets trunketed when we try to assign a number of more than 8 bits of int to the char for typecasting.

Toh aise data types jinke size kam hai usko hum jyada size waale data type mein typecasting kar sakte hai since there is no chance of data loss.
*/

// If Else Statements and some codes on it: Already know

// Loop Concept (for, while and do-while) and few codes on it: Already know

/*
* HOMEWORK:

If-else
1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

For Loop
1. Print “India will win the World Cup 2023”, 20 times.
2. Print all Odd numbers from 1 to n, take n as an input from the user.
3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

=> Not at all exciting to even try
*/