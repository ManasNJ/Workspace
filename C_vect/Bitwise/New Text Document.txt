#include <stdio.h>
int main(){

	unsigned char num = 13;
	unsigned char rev = 0;
	
	for(int i=0; i<8; i++){
	
	rev = rev<<1;
	rev = rev | (num&1);
	num = num>>1;
	}

	printf("Reversed value is = %u\n", rev);	

	return 0;
}	
