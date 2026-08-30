#include <stdio.h>
int main(){

	unsigned int num = 18;
	unsigned int pos = 0;

	while(num){
	pos++ ;
	num>>=1;
	}

	printf("MSB Position = %d\n", pos);

	return 0;
}	
