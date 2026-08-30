#include<stdio.h>

typedef unsigned char uint8_t;

void main()
{	
    struct value
    {
        uint8_t bit1:1;
	    uint8_t bit3:4;
	    uint8_t bit4:4;
    }bit={1,2,2};

    printf("%d %d %d\n", bit.bit1, bit.bit3, bit.bit4);
}
