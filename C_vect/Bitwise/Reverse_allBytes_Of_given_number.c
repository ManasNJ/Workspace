#include <stdio.h>
int main(){

	unsigned int num = 0x12345678;
	unsigned int rev = 0;
	
	rev = ((num&0x000000FF)<<24)|((num&0x0000FF00)<<8)|((num&0x00FF0000)>>8)|((num&0xFF000000)>>24) ;

	printf("Reversed value is = 0x%08X\n", rev);	 // This represents the number in hexadecimal format with leading zeros and uppercase letters.

	return 0;
}	
