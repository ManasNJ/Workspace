/* Class & Object */
/* Class is a blue print of your data structure. Once your blueprint i.e object is ready , you will create a realworld 
physically accessible entity of it called as Object.
Class is advanced version of a structure. Members of class are by default private.  */

/* 
    Structure ~ Class (With minor differences)
    Structure Variable ~ Class Object            
*/


// In below example operation of this ptr is explained, but remember that it will happen internally & will be performed by compiler.
//This pointer is of same class type & is a constant pointer.
// we need not write this ptr operation instructions explicitly.
// For more understanding refer Readme.md file.

#include <iostream>
using namespace std;

 class cl{
    int rollno ;
    char  name[10];

    public:
    void data_input()   //*this = &c1;  further for receiving data from user & accessing it this pointer will act in following way: this->rollno & this->name.
    {
        cout<<"Enter the input data for rollno & name: "<<endl;
        cin >> rollno >> name;
    }
    
    void data_output()
    {
        cout<<"The Data Entered is : "<<endl;
        cout << rollno << " " << name << endl;

    }
 };

 main()
 {
    cl c1;
    c1.data_input();       //---> Internally this happens: cl::data_input(&c1);  address of c1 sent from here will be received by a special pointer called "this pointer" above at line 19. (Function Definition)
    c1.data_output();     //---> Internally this happens: cl::data_output(&c1);  address of c1 sent from here will be received by a special pointer called "this pointer" above at line 25. (Function Definition)
 }


//  Compiler Conversion Code :
/*
#include <iostream>
using namespace std;

 class cl{
    int rollno ;
    char  name[10];

    public:
    void data_input(cl* const this)   //*this = &c1;  further for receiving data from user & accessing it this pointer will act in following way: this->rollno & this->name.
    {
        cout<<"Enter the input data for rollno & name: "<<endl;
        cin >> this->rollno >> this->name;
    }
    
    void data_output(cl* const this)
    {
        cout<<"The Data Entered is : "<<endl;
        cout << this->rollno << " " << this->name << endl;

    }
 };

 main()
 {
    cl c1;
    cl::data_input(&c1);
    cl::data_output(&c1);
 }
 
*/

