
// Example of Basic type to Class type Conversion

#include <iostream>
using namespace std;

class Time{
    int hr, min;
    public:
    Time(){
        hr = 0;
        min = 0;
     }

    Time(int n){        //  These types of constructors which are written for conversion are called conversion constructors.
                        // That means , n is sent and being converted into hrs and minutes.
        hr = n/60;
        min = n%60;
    }

    void get_data(){
        cout << "Time is :" << endl ; 
        cout <<hr << "Hrs"  << " " << min << "Minutes"  << endl;
    }
};

int main(){
    Time t1; 
    // if you send t1(125) , then parameterized constructor

    int n = 0;
    cout << "Enter value of n "<< endl;
    cin >> n;  

    t1 = n;  ///at this line Conversion  constructor will be called for t1.

    t1.get_data();
}