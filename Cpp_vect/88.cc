#include <iostream>
using namespace std;

class Question{
    int y;

    public:

    int operator==(int a)
    {
        if(a==1)
        return 1;

        else if(a==2)
        return 2;

        else if(a==3)
        return 3;
    }
    
};

int main()
{
    Question x;

    if((x==1) && (x==2) && (x==3))
    printf("SUCCESS");

}