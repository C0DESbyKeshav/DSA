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