/* Check if a bit is 0, if yes, update it to 1 */

#include <stdio.h>
typedef unsigned int uint32_t;
int main(){
	
	uint32_t num = 67;

	for(int i=31; i>=0 ; i--){
	
	if(0 == ((num >> i) & 1))
	num = num | (1<<i);
	
	}

	printf ("Number is : %d\n", num);
	/* You can expect -1 as output, because all bits are set. */
	return 0;
}
	
	