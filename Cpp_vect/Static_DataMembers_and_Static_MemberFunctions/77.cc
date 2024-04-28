
/* Error program : Understand the reason of error from explaination given below. */

#include <iostream>
using namespace std;
class Facebook{

    static int count;
    char name[20];

    public:
    Facebook(){
        count ++;
        cin >> name; 
    }
    static int object_status(){
        //cout << "name -"<< name << endl; //here for static function no object address is passed , hence no this ptr. So it can't access the name variable through object & print the data stored in name.
                                            //so line 17 will lead to error.
        return count;
    }
};
int Facebook::count=0;

int main()
{
    Facebook f1, f2;
    cout << Facebook::object_status()<< endl;      
}