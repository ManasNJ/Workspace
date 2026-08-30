#include <stdio.h>
typedef unsigned char uint8_t;
#define pf printf("Value of i and j are %hhu and %hhu respectively.\n", i, j)
uint8_t main(void){
    uint8_t i = 5, j = 10;
    pf;
    return 0;
}