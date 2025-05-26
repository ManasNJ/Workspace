/*
A class having only one object is called singleton class. So constructor will be called only once. 

You can create n number of pointer but strictly one object.
 */

#include <iostream>
using namespace std;

class Singleton{

    static Singleton *sptr; //We are creating this ptr to make use for dynamic memory allocation.
    // This ptr we are using in a static function. So even the pointer should mandatorily be static.

    Singleton(){
        cout << "Constructor placed in private section" << endl;  //Placing Constructor in private purposely so that object can't be created in main function.
    }

    public:
    static Singleton* create_object(){ //We want to call this function without creating an object in main function. So we will make it static.
        
        if(sptr==0){
            sptr = new Singleton ;   //Created a Singleton object through dynamic memory allocation.
            return sptr;
        }

        else
            return sptr;
    }
    
    void get_data(){
        cout << "sptr - " << sptr << endl;
    }

    ~Singleton(){
        cout << " destructor " << endl;
        //delete sptr;  //We cant write this statement as destructor will get called recursively.
        // why ?? , think !
    }
    
};
 
   Singleton* Singleton::sptr = 0;
// Datatype   Class    :: Variable    --> As we remember, this is how a static variable is initialized outside the class.  

int main(){

    Singleton *st1, *st2, *st3, *st4;

    st1 = Singleton::create_object();
    st2 = Singleton::create_object();
    st3 = Singleton::create_object();
    st4 = Singleton::create_object();
    st1->get_data();
    delete st1;
}
