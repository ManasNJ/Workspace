#include <stdio.h>
int main(){

	unsigned int num = 10; 
	
	num^=(1<<1);
	printf("Result=%u\n", num);	

	return 0;
}	
