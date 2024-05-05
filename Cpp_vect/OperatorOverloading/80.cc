/*
    Operator Overloading

Please refer the readme document for explaination of below program. 

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
    Family f1(10, 20), f2(30, 40), f3(50, 60), f4(70, 80), f5;

    f5 = f1 + f2 + f3 + f4; //So here no need to write individual addition function. Instead 3 times the operator overloading function will be called.

    f5.print_data();

    /*You can see in the output "Output+Overload" will print 3 times. 
      So it means operator overload function is called 3 times. */
}
  