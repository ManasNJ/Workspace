/* Find size without using sizeof operator */

#include <stdio.h>
int main(){
	
	int num;
	int *p = &num;
	
	int *q = p+1;
	
	printf("Size of num variable will be : %d\n", (char *)q - (char*)p);
	return 0;
}