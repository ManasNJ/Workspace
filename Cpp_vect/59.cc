
/* Let's write the Copy Constructor definition by ourselves.  */
/*A copy constructor takes arguments as reference */

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

    /*This cash is f3's cash variable*/cash = temp_obj.cash;/*we are assigning f3's cash variable with f2's cash value, for which local reference arg is temp_obj.cash*/
    /*This gold is f3's gold variable*/gold = temp_obj.gold;/*we are assigning f3's gold variable with f2's gold value, for which local reference arg is temp_obj.gold*/
}

void Family::print_data(){
    cout << "Cash:" << cash << " " << "Gold:" << gold << endl;
}

int main()
{
    Family f1, f2(30, 40), f3(f2), f4=f3, f5;  //----->Internally Family(&f3, f2); Internally, with f2,  address of f3 is passed and caught by this ptr in Constructor. f2 is caught by temporary object of same class created in the constructor.
    f5 = f1;         
    /*Constructor calls as per object creation :
    f1 -> Default Constructor
    f2 -> Parameterized Constructor
    f3 -> Copy Constructor
    f4 -> Copy Const
    f5 -> Default Constructor
   Note that a constructor is called only during object creation/Initialiaztion(i.e Declaration + Definition). Here f5 is created at line 40 itself. So default Constructor will be called for f5.
   Although f5 is assigned with f1 at line 41, that doesn't mean that Copy Constructor is called for f5 again.
   Instead,compiler will call  assisgnment overload operator function for f5 to assign with values of f1.
    */
    f1.print_data();
    f2.print_data();
    f3.print_data();
    f4.print_data();
    f5.print_data();

}