// Base class function can be called by derived class object.


#include <iostream>
using namespace std;

class Base{

public:
	void get_data_base(){
	cout << "Base class get data function" << endl;	
}

};

class Derived: public Base{

public:
	void get_data_derived(){
	cout << "Derived class get data function" << endl;	
}

};

int main(){

	Derived d1;
	d1.get_data_base();

	Base *bptr;
	bptr = &d1; // At first glance this might seems erroneous because ptr is of base type to which we are assigning derived class address but this implementation is perfectly fine.

	/* Thats because Derived class is inherited from base class. For example, in above code when base class get data function is called by derived class object, then d1's address will be sent to that
		funtion ex = Base::get_data_base(&d1); . And that function has a "this" pointer which will be receiving this derived class's address. THIS pointer is of Base class. That means, base class's 
		this ptr is holding derived class address. Hence, bptr = & d1 is a valid staTEMENT. */	

	/* Whereas the other way around is invalid.
	Derived *dptr;
	Base b1;
	dptr = &b1;
	*/

}