
/* A friend function can be friend to N number of classes */

#include <iostream>
using namespace std;
class Family{
    int cash, gold;
    void data_input();
    
    friend void data_output(Family);                         //Now Data output function is a non-member function.
    friend int main();                                      //You just need to attach the friend keyword for the function which you wanna allow to acces your private data.
};

int main()
{
    Family manas;
    manas.data_input();
    data_output(manas);
}

void Family::data_input()
{
    cout<<"Enter the values of cash & gold: "<<endl;
    cin >> cash >> gold;
}

void data_output(Family temp)
{
    cout<<"values of cash & gold are: "<<endl;
    cout << temp.cash << " " <<temp.gold<<endl;          //Previously data_output was a member function so it could directly access cash and gold through this pointer.
                                                        // Whereas now data output is a non-member function so you need to access it through object of class.
}