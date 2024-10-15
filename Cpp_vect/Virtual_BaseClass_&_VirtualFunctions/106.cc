// Base class function can be called by derived class object.


#include <iostream>
using namespace std;

class Base{

public:
	void get_data(){
	cout << "Base class get data function" << endl;	
}

};

class Derived: public Base{

public:
	void get_data(){
	cout << "Derived class get data function" << endl;	
}

};

int main(){

	Derived d1;

	Base *bptr;
	bptr = &d1; // At first glance this might seems erroneous because ptr is of base type to which we are assigning derived class address but this implementation is perfectly fine.
	
	bptr -> get_data(); 
	/* Here one might think that the get_data() function will be called from Class Deried. 
	   But thats not the case. get_data() from Base class will be called.
	thats because , function binding will be done at compile time. that means which function should bptr exactly point at will happen at compile time.
	but, bptr = &d1 is a memory allocation statemennt which will happen at runtime.
	Hence at compile time, bptr will get assigned with base class's get_data function and not Derived class's.
	
	Here you need to get knowledge on compile time and runtime binding.

	At compile time all syntax checks and function bindings are done..
	By default function binding happens at compile time.
	whereas, pointer's memory allocation is done at runtime.

	Now if you add Virtual keyword to the get_Data function in base class, then that function iniding decision it won't take at compile time 
	Instead it will do it at runtime.
	*/
	

	

}