
// Example of Class type to Basic type Conversion

#include <iostream>
using namespace std;

class Time{

    int hrs, mints;
    
    public:
    Time(){
        hrs=0, mints=0;
    }

    Time(int h, int m){
        hrs=h;
        mints=m;
    }

    operator int(){         // This is a special operator function which is used specifically for Type Conversion.
        return hrs*60+mints;
    }

};

int main(){

    Time t1(12,15);
    int n;
    n = t1;
    cout << "number of minutes :" << n << endl;
}