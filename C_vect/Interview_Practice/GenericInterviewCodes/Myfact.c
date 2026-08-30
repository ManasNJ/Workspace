#include <stdio.h>
int my_fact(int );
int main(){
int n, result;
printf("Enter number\n");
scanf ("%d", &n);

result = my_fact(n);
printf("Factorial = %d\n", result);

return 0;
}

int my_fact(int n){

	static int prod = 1;	

	if(n){
	prod = prod*n;
	my_fact(n-1);
	}
	
	else 
	return prod;
	
}