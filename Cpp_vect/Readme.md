###### open this file with markdown enhanced preview extension in VS Code

# C vs C++


| Sr no | C | C++ |
| - |---- | ---- |
| 1 | Printf & Scanf are functions in C | Cout & Cin are objects of class in C++ |
| 2 | Printf & Scanf require format specifiers | But Cout & Cin do not require format specifiers |
| 3 | You can't print user defined datatypes like structure in C directly | Opposite can be done in C++ using operator overloading |

#### Example of point 3
##### 3.1 w.r.t C
Given below can't be done in C. That means, you can't directly take input of a struture or print a structure in C. You have to access individual elements of that structure by s1.a , s1.b ...etc.
![C_Example_image](Images/CvsC++_1.jpg) 


##### 3.2  w.r.t C++
Whereas in C++ you can directly write 
Cin>>S1;
or
Cout<<S1;


### Function Overloading
Function Overloading refers to capability of using same named Functions to perform several different tasks. 
Name for the functions can be same, However these functions must differ in the number of arguments , order of arguments or types of arguments.
![Function_Overloading](Images\FuntionOverloading_1.JPG) 

##### NAMEMANGLING : 
Compiler will internally change the function name for its reference on the basis of number of Args, datatype or order of arguments to differentiate between same function names. This concept is called NAMEMANGLING.
To see the function namemangling opertion, you can refer to the translator stage program of out file by using following command :
g++ -S filename -o 36.s
After compiling your file using above command, one .s file will be generated for your file. It is the compile time file for your source code. You can see the namemangling for functions in that file.

###### Compilation stages & Generating stage wise file
Please find below image for referring the file generation as per Compilation stages.
![](Images\Compilation_Stages.JPG)

###### C Structure v/s C++ Structure
![](Images\C_struct_vs_C++_struct.jpg)

In a Class, by default all members are private , and can be accessed only by member functions.

###### Access Specifiers in C++
Accessibility to class's data members when access specifiers are made use of.
![](Images\C++_AccessSpecifiers.jpg)

###### Refer 40.cc in repo for "This Pointer" 
To see the this ptr operation on a program/file you can use following commands with flags as mentioned:
g++ filename.cpp -fdump -tree-gimple
then a new file will be created by the name of 
"filename.cpp.006t.gimple" 
In this file you can see the operation of this ptr.

###### Friend Functions in C++
Friend function is a non-member function that can access private/protected data of a class.

###### Friend Class v/s Friend Function
![](Images\FriendClass_vs_Function.jpg)

### File Revision History 
| Rev | Date | Name |
| --- | --- | --- | 
| 1.0 | 27-Feb-2024 | Manas |
| 2.0 | 07-Apr-2024 | Manas |