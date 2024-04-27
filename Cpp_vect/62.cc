
/*Copy Constructor call, If an object is passed as reference & returned as reference */

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
Family& test_function(Family &obj)        //TEST FUNCTION with return type of family object & reference arguments passed aswell of Family type.
{
    cout << "Test Function" << endl;
    return obj;
}

int main()
{
    Family f1, f2;      //here for both classes default constructor will be called.
    f1.print_data();
    f2=test_function(f1);   /* Here Copy Constructor won't be called even once as both arg & return type is reference. */
}

/* Check the outputs to understand the constructor calls */