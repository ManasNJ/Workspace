
/* Delete given character from a  string */

#include <stdio.h>
int main(){
	
	char s[10]; 
	char del = 'a';
	int l;
	
	printf("Enter a string: \n");
	gets(s);
	
	for( l=0; s[l]; l++);
	
	for(int i=0; i<l ; i++){
	
		if(del == s[i]){
			for(int j=i; j<l; j++)
			s[j] = s[j+1];
			
			l--;
			i--;
			}
	}		

	printf("After deletion, string is : \n");
	puts(s);		
	
	return 0;
}




