#include <stdio.h>
void main(){
    union{
            struct{
                char c[2];
                char ch[2];
            }s;

            struct{
                short int i;
                short int j;
            }s1;
    }u={12, 1, 15, 1};

    printf("u.s.c[0]=%d\n u.s.c[1]=%d\n u.s.ch[0]=%d\n u.s.ch[1]=%d\n u.s1.i=%d\n u.s1.j=%d\n", u.s.c[0], u.s.c[1], u.s.ch[0], u.s.ch[1], u.s1.i, u.s1.j);
}

/*
 * The union members share the same memory.
 * s stores bytes: 12, 1, 15, 1.
 * On a little-endian system, each short combines two bytes:
 *
 * i = 1 * 256 + 12 = 268
 * j = 1 * 256 + 15 = 271
 *
 * The exact result depends on the system's byte order and short size.
 */