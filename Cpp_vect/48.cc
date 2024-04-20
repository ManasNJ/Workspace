
/* Friend Class */

#include <iostream>
using namespace std;

class FamilyA{
    int cash, gold;

    public:
    void data_input()
    {
        cout << "Enter cash & gold" << endl;
        cin >> cash >> gold;
    }
    friend class FamilyB;           //A has specified B is his friend, so B class can access data of A. But vice versa not possible (A can't access B's data).
};

class FamilyB
{

    public:
    void get_data1(FamilyA a)
    {
        cout << a.cash << " " << a.gold << endl;
    }
    void get_data2(FamilyA a)
    {
        cout << a.cash << " " << a.gold << endl;
    }
    void get_data3(FamilyA a)
    {
        cout << a.cash << " " << a.gold << endl;
    }   
};

int main()
{
    FamilyA a1;
    FamilyB b1;
    a1.data_input();
    b1.get_data1(a1);
    b1.get_data2(a1);
    b1.get_data3(a1);
}