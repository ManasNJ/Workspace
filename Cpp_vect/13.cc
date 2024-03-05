#include <iostream>
using namespace std;
int& func()
{
    static int k=25;
    cout<<"Value of k " <<k<<endl;
    return k;
}

int main()
{
    int a=100;
    int &p=func(); //func has reference return type
                    //therefore ref variable p will be assigned with ref variable k from func()
    p=a;            //as we know ref variable is just a duplicate name for k & no new memory is allocated
                    //Therefore p=k=100
    func();
    return 0;
    
}