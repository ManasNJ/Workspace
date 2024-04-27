
/*Copy Constructor call, If an object is passed as argument or if an object is returned */

#include <iostream>
using namespace std;

class Family{
    int cash, gold;

    public:
    Family();
    Family(int, int);
    Family(Family&);
    void print_data();
};

Family::Family():cash(10),gold(20){
    cout<<"Default Constructor"<<endl;
}

Family::Family(int a, int b):cash(a),gold(b){
    cout << "Parameterized Constructor"<<endl;
}

Family::Family(Family& temp_obj)
{
    cout <<"Copy Constructor" <<endl;

    cash = temp_obj.cash;
    gold = temp_obj.gold;
}

void Family::print_data(){
    cout << "Cash:" << cash << " " << "Gold:" << gold << endl;
}

/*Non Member Function*/
Family test_function(Family obj)        //TEST FUNCTION with return type of family object & arguments passed aswell of Family type.
{
    cout << "Test Function" << endl;
    return obj;
}

int main()
{
    Family f1, f2;      //here for both classes default constructor will be called.
    f1.print_data();
    f2=test_function(f1);   /* here 2 times copy Constructor will be called. first, while sending f1 to test_function & copying f1's data to obj
                            second, when returning the object & copying contents from 'obj' to 'f2'. */
}

/* Check the outputs to understand the constructor calls */