
/*Member function definition outside the class */

#include <iostream>
using namespace std;

class Family{

    int cash, gold;
  
    public:
    /*Member Function Declarations*/
    void data_input(int, int);
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
    cout << "The Data Output is" << endl;
    cout << cash << " " << gold << endl;
}

int main()
{
    Family f1;
    f1.data_input(10, 20);
    f1.data_output();
}