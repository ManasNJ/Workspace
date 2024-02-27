######open this file with markdown enhanced preview extension in VS Code

# C vs C++


| Sr no | C | C++ |
| - |---- | ---- |
| 1 | Printf & Scanf are functions in C | Cout & Cin are objects of class in C++ |
| 2 | Printf & Scanf require format specifiers | But Cout & Cin do not require format specifiers |
| 3 | You can't print user defined datatypes like structure in C directly | Opposite can be done in C++ using operator overloading |

#### Example of point 3
#####3.1 w.r.t C
Given below can't be done in C. That means, you can't directly take input of a struture or print a structure in C. You have to access individual elements of that structure by s1.a , s1.b ...etc.
![C_Example_image](Images/CvsC++_1.jpg) 


#####3.2  w.r.t C++
Whereas in C++ you can directly write 
Cin>>S1;
or
Cout<<S1;







###File Revision History
| Rev | Date | Name |
| --- | --- | --- | 
| 1.0 | 27-Feb-2024 | Manas | 