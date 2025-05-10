//  Function Templates Program 1 
// Instead of using multiple functions to implement datatype specific  operations , u can simply use template.
// Template will provide generic datatype.

#include <iostream>
using namespace std;

template<class general>         //Template created
//or template<typename general>
//Validity of this template is available only for below block , tht is swap function. After that there is no significance of general.
void custom_swap_algo(general &p, general &q)
{

cout << "The swap algo is being implemented for " << typeid(p).name() <<endl;  //typeid is a special operator function used to know , the operation is being done on which datatype.

general r;

r=p;
p=q;
q=r;
}

int main(){

    int a = 10 , b= 20;
    char c = 'x' , d= 'y';
    float e = 1.1 , f= 2.1;

    custom_swap_algo(a , b);
    custom_swap_algo(c , d);
    custom_swap_algo(e , f);


}
