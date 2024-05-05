
/* If operator overloading function is non-member & friend function. */
/* Refer Readme doc for diagramatic explaination */

#include <iostream>
using namespace std;

class Family{

    int r, i;

    public:

    Family(){
        r = 0, i = 0;
    }

    Family(int a, int b){
        r = a, i = b;
    }

    void print_data(){
        
        if(i<0)
        cout << r << i << "j" <<endl;

        else
        cout << r << "+" << i<<"j"<<endl;
    } 

    friend Family operator+(Family Obj1, Family obj2);          //Friend function declared (refer comment of line 39)
}; 

      /* Non-Member Function */                      //Notice that if you are doing binary operation using non-member function then the function will take 2 arguments. 
                                                     //Because this time it won't be having this ptr to receive left operands address.
    Family operator+ (Family Obj1, Family obj2)
    {
        cout << "Operator Overloading" << endl;
        Family temp;

        temp.r = Obj1.r + obj2.r;           //now this is a non-member function but trying to access private data of Family. So we will declare it as friend in Family class.
        temp.i = Obj1.i + obj2.i;
        return temp;
    }

int main()
{
    Family f1(10, 20), f2(100, 200), f3(40, 50), f4(70, 80), f5;

    f5 = f1 + f2 + f3 + f4;

    f5.print_data();
}