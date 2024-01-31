#include<stdio.h>
int sum(int,int);
/*int sub(int,int);
int mul(int,int);
int dive(int,int);*/
void main()
{
    int i=10,j=20,k;
    printf("%d %d\n",i,j);
    int (*p)(int,int); // pointer to a function that takes 2 integers as arguments & returns an integer.
    k=sum(i,j);             // We are storing sum function address into p.
    k=(*p)(i,j);       // We are calling sum function indirectly through pointer.
    // k=sum(i,j);       // We are calling sum function directly.
    printf("sum=%d",k);
    p=mul(i,j);

}

int sum(int a, int b)
{
    int c=a+b; 
    return c;
}
int mul(int a, int b)
{
    return a*b;
}
