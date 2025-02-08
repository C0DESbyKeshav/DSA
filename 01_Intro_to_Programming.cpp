// INTRODUCTION TO PROGRAMMING
/*
Neeche likhe gaye paragraph ek assumption hai aur uska vaastik jeevan se koi sambandh nhi hai:
Aaj se maanlo 10000 saal pahile, aadimaanav log ka bass itna hi kaam rehta tha ki khaao aur sou jaao.
Woh log yeh hi do task ko repeat karte rehte the.
Ab kuch samay baad woh log apna kaam nikaalne ke liye, cow, goat, dog, horse jaise animals paalne lag gaye.
Ab uss time pe toh number system exists bhi nhi karta tha.
Toh woh log ke paas yeh pata lagaane ka method hi nhi tha ki total kitne goats hai aur shaam tak saare waapis aagaye ki nhi.
Phir woh log ne 1 jugaad chaalu kiya ki 1 goat aaya toh 1 stone apne paas rakh liya toh woh log ko pata chal jaata tha ki mere poore 5 ya 10 goats waapis aa gaye.
Ab jaise hi uske paas 500 goats aa gayi toh ab woh 500 stones to pocket mein leke nahi ghoom sakta hai har jagah.
Here, the Number System came to be in need.
*/

/*
Most of the people don't know that the number system is invented by the Indians.
Not just ZERO (by Aryabhatta) but also the entire number system is invented by the Indians.
Decimal Number System -> Base 10 system: {0,1,2,3,4,5,6,7,8,9}
Before that Egyptians used to do the counting by Base 60 system which was completely different. (There's no need to get into the details of history of Egyptians counting system)
But the decimal number system was the one that became popular because humans are / were very much familiar with 10 numbers.
*/

/*
How people used to add numbers back then:
Decimal Number System : {0,1,2,3,4,5,6,7,8,9}
ex: 8 + 5 = 13
1. First keep the pointer on 8
{0,1,2,3,4,5,6,7,8,9}
                 *
2. Move towards right counting from 1 upto 5 after 8 (in mind)
3. Keep the pointer on number at which the counting ended up
{0,1,2,3,4,5,6,7,8,9}
       *
4. Now write the final answer
8 + 5 = 1 3  --- (from step 3)
        ^ #
^ (tens place) pe 1 aayega since counting karte karte 1 baar bracket ke bahar jaake bracket ko repeat karna pada
# (units place) pe 3 aayega since counting karne ke baad pointer 3 pe aakar ruka
*/

/*
Now, assume a person has to do profit and loss calculation of 5 sales in a register.
All good until that number changes to 500 calculations.
Even if we just have to carry out add and subtract operations, the probability of doing mistake is very high in 500 entries.
This was a major problem in the society.
To resolve this, our friend COMPUTER came in.
At that time, the original meaning of computer was: To Calculate
At that time, the size of a mechanical computer was same as a room we live in.
Physical labor was needed to run the computer.
Accuracy was provided but it was not even that fast and to make the computer hit in entire world for the use of even a common man, the reduce in size of that hardware box (computer) had to be taken care of.
*/

/*
Transistor:
Invention of this thing changed the entire digital world.
Since transistor is a bulb, either it will be on or off (i.e 1 or 0) i.e binary number.
Binary number consits of ony two unit digits --> 0 and 1, and rest are combinations of these two digits.
It is a base 2 number system.
Binary number system is also invented by Indians.
*/

/*
Operations on the binary numbers:
0 + 0 = 0
0 + 1 = 1
1 + 0 = 1
1 + 1 = 2  (WRONG) // We can't write '2' when there only '0' & '1' numbers exists in the binary number system
Counting is done same as the decimal number system
{0, 1}
    *
We are on 1 now and we have to add 1 more to it i.e 1 repeatation will take place
{0, 1}
 *
1 + 1 = 10  (CORRECT) // where 1 is the number of repeatations and 0 is the digit where we ended up after counting
This is the representation of '2' in binary number system.
*/

/*
Conversion of decimal number to binary number:
(27)₁₀ = (?)₂

Divisor    Dividend    Remainder
   2         27
   2         13            1
   2         6             1
   2         3             0
   2         1             1
   2         0             1
So, we will keep dividing it by 2 until the dividend is zero to get the binary number.
The binary number obtained will be from bottom to top.
So, (27)₁₀ = (11011)₂
*/

/*
Conversion of decimal number to decimal number:
(278)₁₀ = (?)₁₀
It's already a decimal number so why bother ?
-> Just to crystal clear the above concept even more.

Divisor    Dividend    Remainder
  10         278
  10         27          8
  10         2           7
  10         0           2
So, we will keep dividing it by 10 until the dividend is zero to get the decimal number.
The decimal number obtained will be from bottom to top.
So, (278)₁₀ = (278)₁₀
*/

/*
How do we used to write 278 ?
(278)₁₀ = (2 * 10²) + (7 * 10¹) + (8 * 10⁰)
The sum of the product of each digit with 10 (because we have to convert the decimal number into something ) to the power of (the weight of that place) gives the desired decimal number.

If we apply the same logic on the binary number, we can change its number system.
(101)₂ = (?)₁₀
(1 * 2²) + (0 * 2¹) + (1 * 2⁰) = 4 + 0 + 1 = (5)₁₀
The sum of the product of each digit with 2 (because we have to convert the binary number into something ) to the power of (the weight of that place) gives the desired decimal number.
*/

/*
TRICK FOR CONVERSION OF BINARY NUMBER SYSTEM TO DECIMAL NUMBER SYSTEM:
..... 4096   2048   1024   512   256   128   64    32    16    8     4     2     1
..... 2¹²    2¹¹    2¹⁰    2⁹    2⁸    2⁷    2⁶    2⁵    2⁴    2³    2²    2¹    2⁰
*/

/*
OCTA-DECIMAL NUMBER SYSTEM:
This number system contists of total of 8 digits [0, 1, 2, 3, 4, 5, 6, 7]
ex:(4)₁₀ + (5)₁₀ = (9)₁₀    But, (4)₈ + (5)₈ = (11)₈
1. First keep the pointer on 4
{0,1,2,3,4,5,6,7}
         *
2. Move towards right counting from 1 upto 5 after 4 (in mind)
3. Keep the pointer on number at which the counting ended up
{0,1,2,3,4,5,6,7}
   *
4. Now write the final answer
4 + 5 = 1 1  --- (from step 3)
        ^ #
^ (tens place) pe 1 aayega since counting karte karte 1 baar bracket ke bahar jaake bracket ko repeat karna pada (i.e. carry mein gaya 1)
# (units place) pe 1 aayega since counting karne ke baad pointer 1 pe aakar rukaa


TO CONVERT A DECIMAL NUMBER INTO AN OCTA-DECIMAL NUMBER:
(23)₁₀ = (?)₈

Divisor    Dividend    Remainder
   8         23
   8         2             7
   8         0             2
So, we will keep dividing it by 8 until the dividend is zero to get the octal number.
The octal number obtained will be from bottom to top.
So, (23)₁₀ = (27)₈


TO CONVERT AN OCTA-DECIMAL NUMBER INTO A DECIMAL NUMBER:
(27)₈ = (?)₁₀
(2 * 8¹) + (7 * 8⁰) = 16 + 7 = (23)₁₀
The sum of the product of each digit with 8 (because we have to convert the octal number into something ) to the power of (the weight of that place) gives the desired decimal number.
*/

/*
HEXA-DECIMAL NUMBER SYSTEM:
This number system contists of total of 16 digits [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F]
ex:(8)₁₀ + (5)₁₀ = (13)₁₀    But, (8)₁₆ + (5)₁₆ = (D)₁₆
1. First keep the pointer on 8
{0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}
                 *
2. Move towards right counting from 1 upto 5 after 8 (in mind)
3. Keep the pointer on number at which the counting ended up
{0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}
                           *
4. Now write the final answer
8 + 5 = 0 D  --- (from step 3)
        ^ #
^ (tens place) pe 0 aayega since counting karte karte 0 baar bracket ke bahar jaake bracket ko repeat karna pada
# (units place) pe D aayega since counting karne ke baad pointer D pe aakar rukaa


TO CONVERT A DECIMAL NUMBER INTO AN HEXA-DECIMAL NUMBER:
(11)₁₀ = (?)₁₆

Divisor    Dividend    Remainder
   16         11
   16         0            11 (i.e. B)
So, we will keep dividing it by 16 until the dividend is zero to get the hexadecimal number.
The hexadecimal number obtained will be from bottom to top.
So, (11)₁₀ = (B)₁₆


TO CONVERT AN HEXA-DECIMAL NUMBER INTO A DECIMAL NUMBER:
(B)₁₆ = (?)₁₀
(11 * 16⁰) = 11 * 1 = (11)₁₀
The sum of the product of each digit with 16 (because we have to convert the hexadecimal number into something ) to the power of (the weight of that place) gives the desired decimal number.
*/

/*
REPRESENTATION OF DECIMAL NUMBER ON TRANSISTOR:
To represent (13)₁₀ on the transistor, first convert it into binary number system i.e (1101)₂ because bulb is either off (0) or on (1).
Bulb -> off
Bulb -> off
Bulb -> off
Bulb -> off
Bulb -> off
Bulb -> off
Bulb -> on
Bulb -> on
Bulb -> off
Bulb -> on

Each bulb can store either 0 or 1 i.e. 2 numbers.
So, maximum storage will be 2¹⁰ = 1024


If we take only two bulbs then the maximum storage will be 2² = 4
0 0
0 1
1 0
1 1


If we have 3 transistors then we can store 8 unique numbers.
REASON: We have 3 bulbs, each bulb can store 2 digits (0 or 1)
So, 2 * 2 * 2 = 2³ = 8
*/

/*
MOORE LAW:
Every 2 year the storage capacity of the transistor will be doubled. How ?
Because the size of the transistor is decreasing with time; so, in that same space two transistors get fit.
In same space if 1 transistor : size = 2
2 transistor : size = 4
3 transistor : size = 8
4 transistor : size = 16
5 transistor : size = 32 and so on....
*/

/*
Computer only understands Machine Language which was a problem for the programmers back then as they had to convert all the code into the machine code first which caused many errors and mistakes.
Suppose two people talking to each other in 
*/