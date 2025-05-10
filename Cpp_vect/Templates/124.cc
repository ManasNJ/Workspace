#include <iostream>
using namespace std;

template<typename type>
class ARRAY 
{
    type a[5];
    public :
    void set_data();
    void get_data();
};

template<class TYPE>
void ARRAY<TYPE>::set_data(){
    for(int i=0; i<5; i++)
    cin >> a[i];
}

template<class TYPE>
void ARRAY<TYPE>::get_data(){
    for(int i=0; i<5; i++)
    cout << a[i] << " ";
    cout << endl;
}

int main(){

    ARRAY<int> Obj1;
    cout << "Enter int" << endl; 
    Obj1.set_data();
    Obj1.get_data();

}