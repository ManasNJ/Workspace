#include <stdio.h>
int main(){
    printf("Hello\n");
    system("cal");
    system("pwd");
    printf("Hi");
}

/*
Similar to previous program , in above program line 5 won't execute unless 
All processes of line 4 complete.
*/