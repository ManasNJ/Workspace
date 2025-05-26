/*

Smart pointer is a concept in Cpp, in which we perform a pointer like operation using an object.
(That means pointer like operation without an actual pointer)

*/

#include <iostream>
#include <cstring>

using namespace std;

class person{

    int age;
    char name[20];

    public:

    person(){}
    person(int a, const char *s){
        age = a;
        strcpy(name, s);
    }

    void get_data(){
        cout << " age - " << age << endl ;
        cout << " name  - " << name << endl;
    }
};

class smart_ptr{

    person *ptr; 
    
    public : 
    smart_ptr(){}

    smart_ptr(person *p){
        ptr=p;
    }

    person* operator->(){
        return ptr;
    }

    ~smart_ptr(){
        if(ptr!=0){
            delete ptr;
            ptr=0;
        }
    }
};

int main(){
    smart_ptr sp1(new person(25 , "Manas"));
    // sp1.ptr->get_data(); --> If ptr was in public section, we could have used this statement.
    
    sp1->get_data(); //For this command to work we need to write an operator overloaded api.
    //Because , sp1 is an object, not a pointer. But we are making it act like a ptr through operator overloading.
    // Internally line 59 acts like , (sp1.operator->())->get_data();  which expands to ptr->get_data();
    // So basically sp1.operator->() returns ptr. that ptr points to get_data().
}