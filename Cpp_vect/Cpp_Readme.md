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

###### Constructors
C++ provides a mechanism to initialize an object during its creation and destroy the object when its no longer needed by
using special member functions called _Constructors & Destructors_.
**Constructor** is a special member function of a class which is invoked automatically when an object of same class is created.
The Object gets automatically initialized by the constructor.
![](Images\ConstructorsCharac.jpg)
Whenever an object is created, the constructor is invoked automatically. Therefore a stack frame will be created for constructor. after that program will return to main & call print_data(); function. further stack frame for print_Data will be created.
Constructor can only be in public section. Not in private as otherwise other functions won't be able to access the constructor.

Successfull object creation happens only when:
1)memory is created for the object[Os creates memory]
2)Memory is initialized for the object[This is done by constructor.]
This proves that constructor is called before object creation.

**Types of Constructors**
1) Default constructor : You need not pass any argument to the constructor. Default arguments will be passed by the compiler.
If user provides constructor explicitly then compiler will not provide any default constructor.

2) Parameterized constructor : You send some parameter through object, while creating the object.
3) Copy constructor
![](Images\Copy_Constr.jpg)
![](Images\Copy_Constr2.jpg)
![](Images\Shallow_And_Deep_Copy.jpg)
![](Images\Shallow_Deep_Copy_2.jpg)
**Drawback of Shallow Copy:**
![](Images\Shallow_Drawback.jpg)
![](Images\Shallow_Cpy_Drawback.jpg)
**Refer 64.cc**
Now in above code, when s1 is created parameterized constructor is called , Dynamic memory is allocated & pointer 'name' will point to that Dynamic Memory where further the string passed by object is stored.
But now when you create s2 & pass s1, so for 's2' no specific Copy Constructor is explicitly defined by user so "Shallow Copy" called. for s2 aswell name pointer is present which will point at the same dynamically allocated memory of S1.
Therefore now both name ptrs of S1 & S2 are pointing at same Dynamic memory location. If any of the one is updated, then it will reflect/update in the another aswell.
You can see that when we modify s1 through modify data function, that modification is reflecting in both s1 & s2 later at line 38 , 39.
**Benefit of Deep Copy:**
![](Images\Deep_Copy_Benefit.jpg)
**Refer 65.cc**
![](Images\Benefit_Of_Deep_Copy.jpg)
**Benefit of Deep Copy over Shallow** 
Now in above code, when s1 is created parameterized constructor is called , Dynamic memory is allocated & pointer 'name' will point to that Dynamic Memory where further the string passed by object is stored.
Now when you create s2 & pass s1, so for 's2' specific Copy Constructor which is explicitly defined by user for "Deep Copy" is called. S2 will be sending S1 
& S1 is taken as reference in the deep copy Constructor. for s2 in the deep copy constructor a new Dynamic Memory allocation will be done in the Copy Costructor which will be having different address from s1. So changing the value at s1's name won't affect s2.
**Why Copy Constructor takes arguments as Reference**
![](Images\CopyConstr_Collects_Args_As_Ref.jpg)
**Issue faced if Copy Constructor won't take input as reference (Leads to Segementation Fault)**
![](Images\Segmentation_Fault_Issue_CpyCnstrtr.jpg)

**Constructor & Destructors won't be invoked in case of pointers creation. 
They are only invoked for objects Creation.**
**Destructors**
![](Images\Destructor_Characterstics.jpg)
Destructors are special member functions of a class which are invoked for destroying an Object at the end of program.
![](Images\Constructor_vs_Destructor.jpg)
**By default member functions provided to a Class are:**
1) Default constructor
2) Default destructor
3) Copy Constructor
4) Assignment Operator Overloaded Function.

**Constant Member Function**
It is a member function where the data members are constant.

**Static Data Member & Static Member Functions**
*Refer Static_DataMembers_and_Static_MemberFunctions Module for codes on this topic* 
![](Images\Static_Data_Member.jpg)
![](Images\Static_Member.jpg)
![](Images\Static_Member_Function.jpg)
![](Images\Static_Member_Function_2.jpg)
![](Images\Static_Member_Function_3.jpg)

###### Operator Overloading
Operator Overloading works on predefined aswell as userdefined datatypes.
![](Images\Operator_Overloading_1.jpg)
![](Images\Operator_Overloading_2.jpg)
![](Images\Operator_Overloading_5.jpg)
![](Images\Operator_Overloading_6.jpg)
![](Images\Operator_Overloading_7.jpg)
![](Images\Operator_Overloading_8.jpg)
**Syntax of writing Operator Overloaded Friend Function for extraction & insertion operator**
![](Images\Operator_Overloading_9.jpg)
![](Images\Operator_Overloading_10.jpg)
![](Images\Operator_Overloading_11.jpg)

The below mentioned operators already work on user-defined datatype. Basically Operator Overloading is done in case of those operators who can only work on predefined datatypes. So for them you overload the operators so that they can also
work with userdefined datatypes.
![](Images\Operator_Overloading_12.jpg)


*For 80.cc refer below code*
![](Images\Operator_Overloading_3.jpg)

**Operator Overloading non-member friend function(Refer 82.cc)**
![](Images\Operator_Overloading_4.jpg)

# Inheritance
![](Images\Inheritance_1.jpg)
![](Images\Inheritance_2.jpg)
![](Images\Inheritance_3.jpg)

# Types of Inheritance
##### Multiple Inheritance
![](Images\Multiple_Inherit.jpg)
##### Hybrid Inheritance
![](Images\Hybrid_Inherit.jpg)
##### Hierarchial Inheritance
![](Images\Heirarchial_Inherit.jpg)
##### Multipath Inheritance
![](Images\Multipath_OR_Diamond_Inherit.jpg)


### Virtual Base Class
![](Images\Virtual_Baseclass.jpg)
Virtual Classes are used for avoiding duplication of data
##### Inheritance using virtual base class
Using "Virtual" keyword while inheritance of classes
![](Images\Virtual_class_1.jpg)
##### Using virtual keyword only for one of the Inherited branch
For code, refer 104.cc in Virtual classes folder

1) Branch C has virtual keyword
![](Images\Virtual_class_2.jpg)

2. Branch B has virtual keyword
![](Images\Virtual_class_3.jpg)

### Virtual Function
![](Images\Virtual_Func_1.jpg)
![](Images\Virtual_Func_2.jpg)

### Virtual Table
![](Images\Virtual_Table_1.jpg)
Points to remember w.r.t Virtual Function and Virtual Table.
![](Images\Virtual_Table_2.jpg)
Lookup table contains all normal apis and all other elements/variable entries
Whereas In Lookup table only virtual functions and virtual variables/Ptrs entries are available.
![](Images\Virtual_Table_3.jpg)

### Rules of Virtual Functions
![](Images\Rules_of_VirtualFunctions.jpg) 
All Virtual Functions are Non_Static.
![](Images\Virtual_Func_are_nonStatic.jpg)
Virtual Constructors are not possible. Because constructors are created before Object creation whereas
Virtual functions are created after object creation.
![](Images\Virtual_Constructors.jpg)
![](Images\Virtual_Constructors_2.jpg)
![](Images\Virtual_Constructors_3.jpg)

### Virtual Destructors 
Virtual Destructor is a destructor defined in base class to get proper order of Destructor calls from Derived 
Class to the Base class, when the base class pointer points to derived class dynamic object.

Virtual Destructors make sure that Object resources are released in reverse order of object being constructed with respect to constructed object.

#### Why Base class pointer can point to derived class object but reverse not possible (Derived class pointer points to base object) ?
Derived class is implemented from  base class , so base class pointer can point to derived class object address.
Reverse is not possible because base class not implemented from derived class (no inheritance available from derived to base)

### Pure Virtual Function
A virtual function that is declared but not defined in a base class is referred to as a pure virtual function.
That means in the Base class , the function will be declared and assigned to zero. Such class which is having a function declared
and assigned zero is called Abstract Class. And definition to that function is provided in the Derived Class.
If a class contains atleast one pure virtual function , it is called as abstract class.
If a there is a pure virtual function , then its definition must be present in each derived class else compilation will be unsuccessful.

Note : A class with pure virtual function can't create object of its own.

## Exception Handling

Exception Handling is used for handling exceptions that appear at runtime.
Based on mechanism that uses just 3 keywords :
 **Try** **Throw** **Catch**

 Basically there will be three blocks : try, catch & throw

 **try** : Try block will be trying some code snippet programmed by you.
 {
    In the process of Try block if some exception occurs, immediately it will throw it. this exception will be caught by Catch block.
    (What it will throw ? -> Even that will be programmed by you)
-->  **throw** Exception_Ocurred <--
 }

"Catch" block should compulsorily be immediately after the try block, just like there is "else" condition right after "if".
**catch**{

    --> Will catch the exception thrown and process it as programmed by you. <--

 }

**In case of multiple catch blocks, all Catch Blocks are always executed sequentially from beginning. Hence always right default catch block at the end of all blocks.** 

When there is no valid catch block for throw statement then terminate () will be called.

**terminate()** is a library function. It will call automatically whenever an unhandled exception is raised. 
This terminate function will also call abort function internally , which will forcefully abort the program.
For Example refer 112.cc

Check 114.cc for Default catch block.
Check 118.cc for  rethrow exception.

**STACK UNWINDING** 
The process of removing function entries from the function call stack at runtime is called stack unwinding.
That means , if you have main function , in which u have try block. Try block has Func1() call , Func1 has Func2() call internally.
In Func2() if there is throw block, then it will directly come to main function back and destroy/terminate the Func1 & Func2 stack frames.This is called STACK UNWINDING.
This process is different from regular function calls. In regular function calls, after every function execution , at the return point the stack frame of function is destroyed.
Generally stack winding is used only in Exception Handling.

## Function Templates
Function Templates are generic function prototypes used for multiple functions with same functionality.
Function Templatesare special functions that operate with generic types. This allows us to create a function template whose functionality can be adapted to more than once type or class without repeating entire code for each type. 
Overloading of function templates is possible.

## Class Templates
Class template provides specification for generating classes based on parameters.

Syntax:

template<class Type>
Class classname
{
    Type t;
    Type t1;
}

![](Images\Class_Template_1.jpg)

## Object Slicing
Whenever a derived class object data member is created and assigned to base class object data member. Some of the attributes of derived class data member will be lost. This is called object slicing.

### Files in C++
As per Cpp basics, we know that iostream class is derived from istream and ostream classes.
Similarly, in files we take input data from files using ifstream/ofstream class. This class is derived from istream class.
Apart from these 2, there is another class called fstream class. 
fstream is derived from iostream class. fstream can deal with both input and output at a time.

ex: 
    Usage :-

    ifstream fin;   //fin is the object name. you can give any name to the object.
    fin >> x;       // This instruction states that extract the input from file available in hard disk. and feed it to 'x'.

    ofstream fout ;  
    fout << x;  //This statement says, insert the output from 'x' to file in hard disk. 

    fstream fio ;
    fio >> x;
    fio << x;

    Files Operations & opening file in different modes ( Compared to C handling ) :
    ![](Images\Files_1.jpg)

    For combining any two files commands you have to surely use bitwise OR.
    If we are using only ios:out then data will be truncated by default.
    But if combining ios:in and ios:out , that is ios:in|ios:out (or ios:app) then data won't truncate by default . 
    You need to explicity truncate data by command ios:trunc.

    Functions to handle File ptr:
    ![](Images\Files_2.jpg)
    ![](Images\Files_3.jpg) 

## Type Conversion Function Syntax 
![](Images\Type_Conversion_1.jpg)
Type Conversion function should be a member function.
It will not take any arguments.
This function is not having any return type but must return a  value.
Type conversion function syntax is mentioned in above image.

Types of Type Conversions :
1) Basic type to Class type Conversion
2) Class type to Basic type Conversion
3) Class to Class Conversion

### File Revision History 
| Rev | Date | Name | 
| --- | --- | --- | 
| 1.0 | 27-Feb-2024 | Manas |
| 2.0 | 07-Apr-2024 | Manas |
| 3.0 | 05-May-2024 | Manas |