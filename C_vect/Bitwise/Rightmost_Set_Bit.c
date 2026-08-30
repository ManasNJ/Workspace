
#include <stdio.h>
int main(){

	int num=20;
	int bit = num & (-num); // -num operates as ~num+1
	printf("Rightmost Set Bit Value = %d\n", bit);
	return 0;

	int pos = 0;
		if (num == 0) { /* no set bit */ }

	while ((num & 1) == 0) {
    	num >>= 1;
    	pos++;
	}
	printf("Rightmost set bit position = %d\n", pos); // 0-based
}


/* 
	
	num = 20, 

	Binary of 20 =  0001 0100
	        ~num=   1110 1011           Performing 2's complement on 20, basically -num.
                                                  +1
                           -num=   1110 1100	
 
                          num= 0001 0100
                         -num= 1110 1100
              num & -num= 0000 0100 --> Right most set bit is 3rd bit.

*/		                     