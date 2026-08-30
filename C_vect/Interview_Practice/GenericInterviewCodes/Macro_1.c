
#include <stdio.h>
#define prod(x) (x*x)
typedef unsigned char uint8_t;
int main(){

    uint8_t i=10, j;
    j = prod(i++);
    printf("%d\n", j);
    return 0;
}