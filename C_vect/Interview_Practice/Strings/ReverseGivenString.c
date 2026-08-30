
#include <stdio.h>
#include <string.h>
int main(){

	char s[10] ;
	int l=0;
	printf("Enter string for upto 10 chars\n"); 
	gets(s);

	printf("String before reversal is %s\n", s);

	for(l=0; s[l]; l++);

	for(int i=0, j=l-1; i<j; i++,j--){
	char t;
	t=s[i];
	s[i] = s[j];
	s[j] = t;
	}

	printf("String post reversal is %s\n", s);
	return 0;
}