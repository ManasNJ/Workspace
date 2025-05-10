#include <iostream>
using namespace std;

//Function Templates with multiple parameters is possible

template<typename type1 , typename type2>
type1 my_sum(type1 &p, type2 &q ){        //Here if you observe ,the return type value will be as per type1
    return p+q;
}

int main()
{

    int a=10 , b=20;
    char c='A' , d='B';
    float e=5.1 , f=5.2;

    cout << my_sum(a , b) << endl;
    cout << my_sum(c,d) << endl;
    cout<< my_sum(e,f) << endl;

}