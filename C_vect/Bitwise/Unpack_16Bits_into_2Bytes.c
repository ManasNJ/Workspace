#include <stdio.h>
int main(){

    unsigned short int result = 0x1234; // We took unsigned short int as it is of exactly 2 bytes

    unsigned char high = result>>8; // We took unsigned char as it is of exactly 1 byte.

    unsigned char low = result & 0x00FF; // We took unsigned char as it is of exactly 1 byte.

    printf ("Higher byte: 0x%x \n" , high); // 
    printf ("Lower byte: 0x%x \n" , low);

    /* 
        We use %x for hexadecimal representation
        0x12 prints as 18 with %d
        0x12 prints as 12 with %x
    */

	return 0;
}