#include <stdio.h>
int main(){

	unsigned short int num= 16; 

	if(num&(num-1))
	printf( " %d is not power of 2\n", num);

	else
	printf("%d is power of 2\n", num);

	return 0;
}