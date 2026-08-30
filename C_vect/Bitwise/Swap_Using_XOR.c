#include <stdio.h>
int main(){

	int a=10 , b=20;

	printf("Pre swapping values,  a=%d, b=%d\n", a, b);

	a^=b;
	b^=a;
	a^=b;

	printf("Post swapping values,  a=%d, b=%d\n", a, b); 	 

	return 0;
}	
