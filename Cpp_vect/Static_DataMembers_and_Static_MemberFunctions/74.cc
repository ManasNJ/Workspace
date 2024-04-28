
/* Static Data Members practice program */

#include <iostream>
using namespace std;
    
class Insta{
    

    int Inst_id;
    char name[20];

    public:

    static int count;    //this is declaration of static variable. It should be in public section only so that it can be accessible.

    Insta(){
        count ++;
        cin>>name>>Inst_id;
    }

    void print_data(){
        cout<< "name -" << name << " , "<< "id - " << Inst_id<<endl;
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
        cout << "Total Object Count - "<< Insta::count <<endl; // here you will see at the end of execution of this block of code, count value will again reduce to 4.
    }

    I1.print_data();
    I2.print_data();
    I3.print_data();
    I4.print_data();
    cout << "Total Object Count - "<< Insta::count << endl;
}

//After completing the execution of above code "count" value will become zero but you can't see that updated '0' value of count in the code output as the code is still into execution when you run it.
//Where as you can see the update in count value after line38-41 block of code completes.
// In above program, count is static so in data section memory will be allocated for count variable which is common for I1 I2 I3 I4.
//Whereas seperate memory will be created in for Insta_id & name in stack section of each object. 
