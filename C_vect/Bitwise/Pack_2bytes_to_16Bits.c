
#include <stdio.h>
int main(){

	unsigned char high = 0x12;

	unsigned char low = 0x34;                     // // We took unsigned char as it is of exactly 1 byte.

	unsigned short int result = high<<8 | low ;  // We took unsigned short int as it is of exactly 2 bytes

	printf("0x%x \n" , result);

	return 0;
}

/* Some conceptual points to remember from this code 

1) 0x12 is a hexadecimal representation of number 18.

2) If you just write int x; , while declaring an integer, then it will be by default a signed integer.
                                       for an integer to be unsigned, you must explicitly declare 
                           unsigned int x; 
    Whereas in case of character, if you write char c; , it can behave signed char or unsigned char based on implementation and architecture.
     Which is why it is a good practice to explicitly mentioned unsigned char, as per the requirement to get full range.

Signed char range   ->    -128 to 127
Unsigned char range  ->  0  to 255

	

3)  Char can store integer ? 
Char is also basically an integer storage datatype, it stores ASCII value representations of the characters.
ex :   'A' corresponds to ASCII value 65 which is stored by the character variable.
A
So char isn't restricted to letters. It can also store hexadecimal as internally it will store it as integer equivalents.
*/