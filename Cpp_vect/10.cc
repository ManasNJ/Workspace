
//Call by Reference in Cpp

#include <iostream>
using namespace std;
void swap_data(int &p, int &q) {

    int t;
    t=p;
    p=q;
    q=t;
}
int main()
{
    int a=10, b=20;
    cout<< "Before Swap"<< a << " "<< b<< endl;
    swap_data(a,b);
    cout<< "After Swap"<< a << " "<< b<<endl;
    
}