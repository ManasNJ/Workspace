
/* Inheritance ( Refer Readme for Defn & Syntax) */
/*
1) Size of base class depends only on members of base class
2) Size of Derived class depends on members of base class + Derived class members 
3) All Base class members are inherited to derived class except private members
4) Derived class members can access all base class members except private once (vice versa not possible )
5) Derived class members can't directly access base class members but indirectly possible 
6) Default mode of inheritance is private ( Unless specified ).
7) Eventhough the base class data members are private, they considered while creation of Memory layoutin Derived class.
    But Derived class members can't access them directly (Only possible Indirectly).
*/

#include<iostream>
using namespace std;

class Base{
int x, y;
};

class Derived : public Base{ //Mode of inheritance is public.
int m, n;
};

main()
{
    cout << " Base - " << sizeof(Base) << endl;
    cout << " Derived - " << sizeof(Derived) << endl; /*Derived class can't access members of base class(As the members are in private section) but 
    memory creation for Derived class will also include memory required for base class due to inheritance */         
}

//Size of derived class : 16 , Size of base class : 8