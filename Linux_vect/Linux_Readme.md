###### open this file with markdown enhanced preview extension in VS Code

# In this file I shall be sharing all Linux based commands & some OS level concepts

Predefined functions are the compiler supported functions, also called Library functions.
Predefined function declarations are present in header files , definitions are present in Library.

Compilation stages : 
1) Preprocessor 
2) Translator
3) Assembler - After assembler you get the .o file, that is object file. This is what you call the Library file containing all      predefined function definitions
4) Linker - Links the libraries and generated executible files.

Library is a place where all function definitions are kept together, in form of object file. It is an already compiled code which can be used by anyone without exposing the actual source code nehind the library.
Library linking part comes at the Linker stage.

Types of Library : 
1) Static Library - helps Static Linking (It is also called as archive file, .a file) ex: libc.a, libm.a 
2) Dynamic Library - helps in Dynamic Load time & Dynamic Runtime Linking (Also called shared object .so or dll file) ex: libc.so , libm.so

If linker is Linking with static library, it will add all the necessary function definitions in the a.out/exe file.
If Linker is linking with dynamic library , it will not copy the function definitions. It will copy only the references.

Hence size of executible file is more in static library compared to dynamic.

Importants commands (Most of these commands will only owrk in Linux based system) :

1) cc filename.c -o "executible_filename"  --> This command generates an executible file with the name we have provided. 
In this case default linker links with dynamic C library.

2) cc -static filname.c -o "executible_filename" --> Static Linking

3) size filename  --> Tells different memory size occupied by file (Data/Code/Bss)

4) ldd filename  --> Displays list of dependency files, the executible file required while executing.

5) nm filename > temp    --> This is called output redirection. Output of file will be stored in temp.
By opening temp file we can see which all function definitions have been linked with our main file.