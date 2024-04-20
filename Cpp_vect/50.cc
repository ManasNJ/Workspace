/* Program to make a particular member function of a class as a friend to another class. */

#include <iostream>
using namespace std;

/*
class FamilyB;               Forward Declaration for class FamilyB is given.

 But as we are trying to access member function so we also need its declaration. At line 19 while
declaring the friend class it will try to find the declaration of member function. But we can't declare a member function outside.
For that reason we will shift class FamilyB definition above FamilyA.*/

class FamilyA;   //FamilyA forward declaration.

class FamilyB
    {

        public:
            void data_output1(FamilyA);
        
            /*
            void data_output2(FamilyA temp)
                {
                    cout << "Values of cash & gold from data_output2"<<endl;
                    cout<<temp.cash<<" "<<temp.gold<<endl;
                }
            */
    };

class FamilyA
    {
        int cash, gold;

        public:
            void data_input();
           

        friend void FamilyB::data_output1(FamilyA );
    };

int main()
{
        FamilyA a1; 
        FamilyB b1;

        a1.data_input();

        b1.data_output1(a1);
        //b1.data_output2(a1); 
}

/* FamilyB Member Function Definition */
 void FamilyA::data_input()
            {
                cout << "enter values cash and gold" << endl; 
                cin >> cash >> gold;
            }

/* FamilyB Member Function Definition */
 void FamilyB::data_output1(FamilyA temp_var)
            {
	            cout << "Values of cash & gold from data_output1"<<endl;
                cout<<temp_var.cash<<" "<<temp_var.gold<<endl;
            }
        