#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

uint8_t main(void){
    
    struct st{
        uint8_t a;
        uint16_t b;
        uint32_t c;
    };

    struct st s1;

    uint8_t *p = (uint8_t *)&s1;
    uint8_t *q = (uint8_t *)&s1+1;

    printf("Size of structure is %d\n", sizeof(s1));
   printf("Adress after S1= %p\n", &s1+sizeof(s1) );
    // ALSO remember concept  of padding here.
}