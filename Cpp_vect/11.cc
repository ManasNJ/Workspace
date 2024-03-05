
//Returning refrence from function

#include <iostream>
using namespace std;
int& func(){

    static int t=100; /*t is declared static so that it will be alive till end of file*/
    return t;
}

int main()
{
    cout<< func()<<endl; /* func() is returning t, but return type is '&', 
                            therefore &t will be returned. Further it will be
                            dereferenced in line 13 & value of t is printed. */
    func()=10;
    cout<< func()<<endl;
}