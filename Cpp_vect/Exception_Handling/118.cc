/* Rethrow an Exception */
// Same exception thrown once again is called rethrow an exception.

#include <iostream>
#include <unistd.h>
using namespace std;

void user(){

    cout << "   User : Facing Network Issue, Not getting any data speed" <<endl; 
    sleep(10);
    cout << "Connecting with Customer Care" <<endl; 
    throw "Network Issue";
}

void customer_care(){

    try{

        cout<<"Monitor the User activity"<<endl;
        user();
    }

    catch(const char *s){
        sleep(2);
        cout<<s<<endl;
        sleep(2);
        cout << "Customer Care : Your issue will certainly be resolved" << endl;
        sleep(2);
        cout<<"Taking longer time , redirecting to higher authority "<<endl;
        throw s;
    }
}

int main(){
    
    try{

        customer_care();

    }

    catch(const char *s)
    {
        sleep(2);
        cout << "Service Provider : I am higher authority, working on your issue " << endl;
        sleep(2);
        cout << "Issue Resolved , Happy browsing !"<< endl;
    }
}
