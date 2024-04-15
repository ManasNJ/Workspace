
/*
In static memory , Memory allocation is done at run time.
Below is how its done.
1) Compile Time:
    Lets say you have created 3 vari ables:
    int a=10;
    float b=2.3;
    char c= 'Z';
    now for these varaibles first of all a lookup table will be created by compiler at compiler level.
    This lookup table contains all memory requirement info for these variables.
2) At Load time this lookup table is loaded into RAM
3) At run time the actual memory allocation is done by referring the look up table.

Drawback of static memory allocation :
If you create 3 variables , however at runtime if you are using only one variable then the memory allocated for other two variables will get wasted.

Whereas is Dynamic Memory allocation, all 3 operations are done at runtime hence memory wastage is saved.
*/

 /*For Dynamic Memory Allocation In C++, Apart from previous functions from C that are Malloc(), Calloc(), Realloc() , Free() 
 Even more */ 

 #include<iostream>
 using namespace std;
 int main()
 {
     int *p;            //Memory for pointer p will be allocated in Stack section of RAM. 

     p = (int*)malloc(sizeof(int));   //Malloc  will return void ptr* after memory allocation hence it is must to typecast it to the ptr type of p. In this case its int.
    //  Pointer P is stored in stack section but it will be pointing towards dynamic section of ram where malloc has allocated 4 bytes of memory.
     cout << "Enter Data " << endl;
     cin >> *p;
     cout << "*p = "<< *p << endl;
     free(p);                    // Remember to freee the memory reponsibly after use of variable is done.
 }