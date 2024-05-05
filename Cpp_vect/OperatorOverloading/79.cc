/*
    Operator Overloading

Operators like '+', '-', 'x', '/', '>', '<'  work on predefined datatypes like int, char, float but can't work with userdefined datatypes like structure & class.

So in Operator Overloading we will give extra feature / extra definition to these operators so that they can work on userdefined datatypes aswell. 

Operator Overloading & Function Overloading are examples of Compile Time Polymorphisms.

Whenever a binary operator is overloaded as a member function, it will take only one argument. 

*/

#include <iostream>
using namespace std;

class Family{
    int cash, gold;

    public:
    Family(){
        cash=0, gold=0;
    }

    Family(int a, int b)
    {
        cash=a, gold=b;
    }

    Family operator+ (Family temp)               //Operator overloading
    {                                           //You can see internal compiler operation at line 43 in commented part.
                                                //So f1's address will be received by "This ptr" in operator overloading function & temp will hold value of f2.
                                                //For this function we have taken  a temporary variable by name of "result" where we can store the addition results which we will later return to f3 as result.
        cout << "Operator + Overloaded" << endl;
        Family Result;
        Result.cash = cash + temp.cash;
        Result.gold = gold + temp.gold;
        return Result;
    }

    void print_data()
    {
        cout << "cash - " << cash << " , " << "gold - " << gold << endl;
    }

};

int main()
{
    Family f1(10, 20), f2(30, 40), f3;

    f3 = f1 + f2 ;  //Internally -> f3 = f1.operator+ (f2);  //It  is like a function call
    //c3 = c1.addition(c2);   //c3=Complex::addition(&c1, c2);    
    cout <<"f1 - "<< endl;
    f1.print_data();

    cout <<"f2 - " << endl;
    f2.print_data();

    cout <<"f3 - " << endl;
    f3.print_data();    
}
  