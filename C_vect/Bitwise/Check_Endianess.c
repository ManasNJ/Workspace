#include <stdio.h>
int main(){

	int x=1;
	char *ptr = (char *)&x;
	
	if(*ptr)
		printf("Little Endian\n");

	else
		printf("Big Endian\n");

	return 0;
}	
