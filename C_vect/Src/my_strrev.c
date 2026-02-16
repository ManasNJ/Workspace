
#include "../Inc/C_Globalheader.h"

int main()
{
    char str[6]="Manas";
    int i=0;
    
    for(  ; str[i]; i++);

    for(int j=0; j<i; j++, i-- )
    {
        if(str[j] != str[i-1]){
            char ch=str[j];
            str[j] = str[i-1];
            str[i-1] = ch;
        }
    }

    printf("%s",str);
}