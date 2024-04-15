#include <iostream>
using namespace std;
int main()
{
    int x=100;
    int* p=&x;
    int* &rp=p;
    cout<< *p << " "<< *rp << endl;
}