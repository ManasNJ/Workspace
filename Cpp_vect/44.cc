
/*If one Member function is private  */
// In that case we can call that private function through a public function as shown

/* Atleast one member function in a class must be available in public section to access the class members. 
No use if all are in private as you will completely lose the accessibilty */

#include <iostream>
using namespace std;

class Family{

    int cash, gold;

    /* Now Set data is private */
    void data_input(int, int);
    
    public:
    /*Member Function Declarations*/
    
    void data_output();
};

/* Family's Member Function Definition */
void Family::data_input(int r, int i)
{
    cash = r;
    gold = i;
}

void Family::data_output()
{
    data_input(10, 20);
    cout << "The Data Output is" << endl;
    cout << cash << " " << gold << endl;
}

int main()
{
    Family f1;
    
    f1.data_output();
}