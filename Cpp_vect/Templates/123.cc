
// Class Templates  

// #include <iostream>
// using namespace std; 

// class ARRAY{

//     int a[5];

//     public : 
//         void set_data(){
//             for(int i=0; i<5; i++)
//             cin>>a[i];
//         }

//         void get_data(){
//             for(int i=0; i<5; i++)
//             cout << a[i] << " ";
//             cout << endl;
//         }

// };

// int main(){

//     ARRAY obj1;

//     obj1.set_data();
//     obj1.get_data();
// }

//In above program we need to mandatorily give input as integer . We cant gove float or char. 
//For this reason we can use class template to make the program generic.

#include <iostream>
using namespace std; 

template<typename type>
class ARRAY{

    type a[5];

    public : 
        void set_data(){
            for(int i=0; i<5; i++)
            cin>>a[i];
        }

        void get_data(){
            for(int i=0; i<5; i++)
            cout << a[i] << " ";
            cout << endl;
        }

};

int main(){

    //ARRAY obj1;  //At this point when memory is being created for obj1, it doesn't know how much memory to allocate for object.
                    // THats because Data type is template. So datatype will be decided on the basis of input. 
                    //Hence while creating object itself we have to specify the datatype we will be using for that object. As shown below.
    
    ARRAY<int> obj1;
    ARRAY<float> obj2;

    cout << "Enter Int vals" << endl;
    obj1.set_data();
    obj1.get_data();

    cout << "Enter float vals" << endl;
    obj2.set_data();
    obj2.get_data();

    //Similarly for char & double.
}
