/* Class & Object */
/* Class is a blue print of your data structure. Once your blueprint i.e object is ready , you will create a realworld 
physically accessible entity of it called as Object.
Class is advanced version of a structure. Members of class are by default private.  */

/* 
    Structure ~ Class (With minor differences)
    Structure Variable ~ Class Object            
*/

#include <iostream>
using namespace std;

 class cl{
    int rollno ;
    char  name[10];

    public:
    void data_input()
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
    class cl c1;
    c1.data_input();
    c1.data_output();
 }