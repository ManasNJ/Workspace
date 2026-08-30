#include <stdio.h>
int main(){

	unsigned char reg = 0x00;
	reg = reg | 0x0A;                // This is sort of a mask
	
	printf("0x%x\n", reg);

	return 0;
}	
