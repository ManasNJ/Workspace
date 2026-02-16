#include <stdio.h>
#include "libabc.h"

int main(){

    int a =10, b=20;
    
    int c = sum(a,b);
    int d = mul(a,b);

    printf("Result of addition of a and b is %d\n", c);
    print("Result of multiplication of a and b is %d\n", d);
    
}