
/* Operator precedence based output prediction*/

#include <stdio.h>
int main(){

int x = 5;
int y = ~x & x << 1;

printf("y = %d\n", y);
return 0;

}