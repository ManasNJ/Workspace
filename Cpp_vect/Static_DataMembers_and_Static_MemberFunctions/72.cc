
// If Object created itself is constant. 
// With Constant object you can call only constant member functions.

#include <iostream>
using namespace std;

class Avengers{
    mutable int IronMan; 
    int CaptainAmerica;

    public:

    Avengers(){                                 //As the object declared is constant so you can only give it input through user defined constructor
                                                //iF an object is constant it is must to define a userdefined constructor.
        IronMan = 100, CaptainAmerica = 200;
    }

    void data_input(){
        cout <<"Enter values for 2 member variables : " <<endl;
        cin >> IronMan >> CaptainAmerica ;
    }

    void data_output()const{
        IronMan = 300;          //because mutable you can update it. 
        cout << "IronMan: " << IronMan << " , " << "CaptainAmerica: " <<CaptainAmerica << endl;
    }
};

int main()
{
    const Avengers team;            // This is a constant object so you need to define a userdefined constructor for it.
    //team.data_input();            //You cannot call data_input to take the input values as its a Constant Object.
    team.data_output();

}

/*

const int x = 10;
int *p;
p = &x;

Above code snippet was valid in C, But not in C++ due to strict typechecking in C++.
It will generate error in C++.

Because here 'x' is constant data which you can't modify with the help of pointer in C++.


#include <iostream>
using namespace std;

class Avengers{
    mutable int IronMan;
    int CaptainAmerica;

    public:

    Avengers(){                                 //As the object declared is constant so you can only give it input through user defined constructor
                                                //iF an object is constant it is must to define a userdefined constructor.
        IronMan = 100, CaptainAmerica = 200;
    }

    void data_input(){
        cout <<"Enter values for 2 member variables : " <<endl;
        cin >> IronMan >> CaptainAmerica ;
    }

    void data_output()const{
        IronMan = 300;          //because mutable you can update it. 
        cout << "IronMan: " << IronMan << " , " << "CaptainAmerica: " <<CaptainAmerica << endl;
    }
};

int main()
{
    const Avengers team;            // This is a constant object so you need to define a userdefined constructor for it.
    team.data_input();            //Now through this data_input function you will pass &team to "this ptr" , but note that here object team is constant
    Similar to the above discussed code snippet of C, object team is constant but this ptr with which &team is received is not constant. hence it will lead to error due to strict typecheck.
    Which is why data_input function is invalid in this program and you should not write it.
    Whereas even while writing data_output function you should attach the "const" keyword as mentioned above.

    After taking the constant member function then the "this" ptr will take the input as  follows :

    const Avenger* this =  &team;


}
*/