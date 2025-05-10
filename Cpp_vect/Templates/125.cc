#include <iostream>
using namespace std;

template <class type1, class type2>
class ARRAY{
    
    type1 a;
    type2 ch;

    public:

        ARRAY();
        ARRAY(type1, type2);
        void get_data();
};

template<class T1,class T2>
ARRAY<T1,T2>::ARRAY(){
    cout << "Enter data " << endl;
    cin >> a >>ch;
}

template<class T1,class T2>
ARRAY<T1,T2>::ARRAY(T1 d, T2 c){
    a=d, ch=c;
}

template<class T1,class T2>
void ARRAY<T1,T2>::get_data(){
    cout << a << " " << ch << endl;
}

int main(){

    ARRAY<int, char> obj1;
    ARRAY<double, char> obj2(12.34, 'A');
    ARRAY<int,float> obj3;
    obj1.get_data();
}