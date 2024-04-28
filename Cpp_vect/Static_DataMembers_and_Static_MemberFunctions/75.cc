
/* Declaring Count in private section & accessing its value */


/* Static Data Members practice program */

#include <iostream>
using namespace std;
    
class Insta{
    

    int Inst_id;
    char name[20];
    static int count; 

    public:
    Insta(){
        count ++;
        cin>>name>>Inst_id;
    }

    void print_data(){
        cout<< "name -" << name << " , "<< "id - " << Inst_id<<endl;
    }

    int return_count()
    {
        return count;
    }

    ~Insta(){           //this destruvtor will decrement count values at the end of executible.
                        //Lets test it by creating a block of code.
        count --;
    }
};

int Insta::count;   // this is definition of static variable which is declared inside the class. By default it will be initialise to zero. You can also assign it some value like "int Insta::count=10;" 

main()
{
    Insta I1, I2, I3, I4;

    {
        Insta I5, I6;
        //cout << "Total Object Count - "<< Insta::count <<endl; // here you will see at the end of execution of this block of code, count value will again reduce to 4.
        cout << "Total Object Count - "<< I5.return_count() <<endl;     // Count value is already set during object creation so you can make use of any object to just print the count data by accessing return count function.
    }

    I1.print_data();
    I2.print_data();
    I3.print_data();
    I4.print_data();
    cout << "Total Object Count - "<< I3.return_count() <<endl;
    // Count value is already set during object creation so you can make use of any object to just print the count data by accessing return count function.
    
    //cout << "Total Object Count - "<< Insta::count << endl;
}
