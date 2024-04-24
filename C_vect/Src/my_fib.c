#include "../Inc/C_Globalheader.h"

int my_fib(int fib_num)
{
    static int i=1, num1=0, num2=1, num3=0;

    if(i)
    {
        printf("%d %d ", num1, num2);
        i--;
    }    

    num3=num1+num2;
    printf("%d ", num3);
    num1 = num2;
    num2 = num3;

    fib_num --;
    
    if(2<fib_num)           //Cause we want to print first 10 Fibonacci numbers
    my_fib(fib_num);

    else
    return 0;
}    

int main()
{
    static int n;
    printf("Enter the number of Fibonacci numbers to print: \n");
    scanf("%d", &n);

    printf("The Fibonacci series is : \n");
    my_fib(n);
}
