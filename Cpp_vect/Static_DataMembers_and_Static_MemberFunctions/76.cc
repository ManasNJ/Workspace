
/* Static Member Functions */

/* Static Member Functions are similar to ordinary Function Declaration.
Static Member Function can directly be involved by using the class name. (instead of involving through object) 
ex: class Family;
    Family::Static_Function();  

Static Member functions can access only static member variables of that class.  */

#include <iostream>
using namespace std;
class Facebook{

    public:
    static void object_status(){
        cout << "Static Member Function" << endl;
    }
};

int main()
{
    Facebook::object_status();      //Its a static function so u can directly call using Class name, no need to create object.

    /* In Static functions object is not created hence when the function is called address of object is not sent & hence there is no concept of
      "this ptr" in static functions. So static functions belong to the class and not the object. */
}