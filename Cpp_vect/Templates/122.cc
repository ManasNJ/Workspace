#include <iostream>
using namespace std;

template<typename type1 , typename type2, typename type3=double>
type3 my_sum(type1 p, type2 q ){        //Here if you observe ,the return type value will be as per type3
    return p+q;
}

int main()
{
    cout << my_sum(10  , 'a') << endl;
    cout << my_sum(11.2, 20) << endl;
    cout<< (char)my_sum('b',22.5) << endl;

}