
#include <stdio.h>
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
int main(){
    uint8_t n; 
    uint32_t s=0;
    printf("Enter the number: \n");
    scanf("%d", &n);

    for(uint8_t i=0; n; n=n/10){
        s += n%10;
    }
    printf("Sum of digits: %d\n", s);

    return 0;
}