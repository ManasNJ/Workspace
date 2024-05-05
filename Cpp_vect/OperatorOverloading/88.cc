
/* Now we will write operator overloading program for insertion & extraction operator.
so that we can directly print the data of a class by accessing its object. Like this :
    cin >> a1;
    cout << a1 << endl;

Remember that these two operators that are ">>"  &   "<<"  can be overloaded only using friend function and not using member functions.
 */


#include<iostream>
using namespace std;

class Array{
    int a[5];

    public:
    Array(){
        for(int i=0; i<5; i++)
        a[i]=0;
    }

    
    Array(int x, int y, int z, int l, int m){
        a[0]=x;
        a[1]=y;
        a[2]=z;
        a[3]=l;
        a[4]=m;
    }

    friend istream& operator>>(istream&, Array&);
    friend ostream& operator<<(ostream&, Array);
};


/*****------  NON-MEMBER FUNCTION  ------*****/
istream& operator>>(istream& in , Array& obj1)      //Here call by reference is done. We are receiving &cout with "in" variable through reference. cout is object of istream class so istream& and obj1 is the ref variable for a1/a2. 
{
    cout << "Operator '>>' Overloaded" <<endl;     //Here we take reference because whatever data you will be updating in this operator overloaded function should reflect in main function. 
    for(int i = 0; i <5; i++)
    in >> obj1.a[i];

    return in;      //Return type is reference , hence we are directly returning the object.
}

ostream& operator<<(ostream& out, Array temp){      //Here we are not using reference for temp as we are not modifying the data. If you want, you can use reference also but take care that data should not get modified. 

    cout << "Operator '<<' Overloaded" <<endl; 

    for(int i=0; i<5; i++)
    out << temp.a[i];

    return out;
}

int main()
{
    Array a1, a2;

    cout << "enter a1 & a2" << endl;

    cin >> a1 >> a2 ;       // Internally -->  cin.operator>> (a1) => operator>>(&cin, &a1) ,  cin.operator>> (a2) => operator>>(&cin, &a2); 
    
    cout << a1 << endl;   //now "<<" is a binary operator so left operand will be used to call the function. 
                          //Therefore internally --> cout.operator<< (a1);   
                    
    cout << a2 << endl;     //Internally --> cout.operator<< (a2);

    /*   
        ** -->  Very Important <-- **

        When we write cout.operator<< (a1); , we know that cout is object of ostream class. This means " operator<< "  should be a function of ostream class so that by
        doing " cout.operator<< " you can access it.

        but operator<< function definition is not available in ostream class and you can't modify it as it is a predefined class.

        so the only option is that you will design it as a non-member function and then give the permission as friend. 
        
        */
}