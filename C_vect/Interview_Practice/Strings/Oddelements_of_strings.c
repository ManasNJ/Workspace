#include <stdio.h>
int main(){
    char ch[20] = "Manas";
    
    for(int i=0; ch[i]; i++){
        if(i%2==0)
            printf("%c", ch[i]);
    }
    
}