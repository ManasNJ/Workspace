
/* Forward Declaration & passing multiple class as arguments */

#include <iostream>
using namespace std;
class son;              //Forward Declaration of class 

class father{
    int salary;

    void data_input()
    {
        cout << "Enter Father's salary: " << endl;
        cin >> salary;
    }

    void data_output()
    {
        cout << " Father's Salary is : " << salary << endl;
    }
    friend int main();
    friend void income_tax(father, son);                /* Now, at this point of time in the program, there is no class by the name of son so compiler won't be able to find reference to it when we declare it
    as a passed argument in income_tax function. For that purpose we have declared the class above at line:6. This is called forward declaration. It means that , that particular class is defined further in the
    program. */ 
};

class son{
    int salary;

    void data_input()
    {
        cout << "Enter Son's salary: " << endl;
        cin >> salary;
    }

    void data_output()
    {
        cout << " Son's Salary is : " << salary << endl;
    }

    friend int main();
    friend void income_tax(father, son); 

};

void income_tax(father f1, son s1)                      //this is a non-member function so we will declare it as friend above.
{
    if(50000>(f1.salary+s1.salary))
    cout << "No tax Applicable" << endl;

    else
    cout<< "Tax applicable: 15% " <<endl;
}

int main()
{
    father f;
    son s;

    f.data_input();
    s.data_input();

    income_tax(f, s);
}