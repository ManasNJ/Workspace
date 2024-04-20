
/* Friend function is a function wherein a non-member function can access private data of a class.
   A class can have N number of friend functions.  */

#include <iostream>
using namespace std;
class Family{
    int cash, gold;
    void data_input();
    void data_output();

    friend int main();      //You just need to attach the friend keyword for the function which you wanna allow to acces your private data.
};

int main()
{
    Family manas;
    manas.data_input();
    manas.data_output();
}

void Family::data_input()
{
    cout<<"Enter the values of cash & gold: "<<endl;
    cin >> cash >> gold;
}

void Family::data_output()
{
    cout<<"values of cash & gold are: "<<endl;
    cout << cash << " " <<gold<<endl;
}