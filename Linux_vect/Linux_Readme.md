###### open this file with markdown enhanced preview extension in VS Code

# In this file I shall be sharing all Linux based commands & some OS level concepts

Predefined functions are the compiler supported functions, also called Library functions.
Predefined function declarations are present in header files , definitions are present in Library.

Compilation stages : 
1) Preprocessor 
2) Translator
3) Assembler - After assembler you get the .o file, that is object file. This is what you call the Library file containing all      predefined function definitions
4) Linker - Links the libraries and generated executible files.

Library is a place where all function definitions are kept together, in form of object file. It is an already compiled code which can be used by anyone without exposing the actual source code behind the library.
Library linking part comes at the Linker stage.

##### Types of Library : 
1) Static Library - helps Static Linking (It is also called as archive file, .a file) ex: libc.a, libm.a 
2) Dynamic Library - helps in Dynamic Load time & Dynamic Runtime Linking (Also called shared object .so or dll file) ex: libc.so , libm.so

If linker is Linking with static library, it will add all the necessary function definitions in the a.out/exe file.
If Linker is linking with dynamic library , it will not copy the function definitions. It will copy only the references.

Hence size of executible file is more in static library compared to dynamic.

##### Default Linking :
If you compile a program using this command ->  cc filename.c 
By default linker links with 3 libraries. Two of them are OS related libraries, third one is libc.so
libc.so contains all   predefined function definitions like printf , scanf , etc.

##### Creating Library
Remember that while creating Libraries , you should not add main function definition inside the library.
Main function definition is only supposed to be in the source code file.
To create the library , we need to create .o files from .c files.
Using command:
    gcc -c filename.c -o filename.o


## Importants commands (Most of these commands will only work in Linux based systems) :

1) cc filename.c -o "executible_filename"  --> This command generates an executible file with the name we have provided. 
In this case default linker links with dynamic C library.

2) cc -static filname.c -o "executible_filename" --> Static  Linking

3) size filename  --> Tells different memory size occupied by file (Data/Code/Bss)

4) ldd filename  --> Displays list of dependency files, the executible file required while executing.

5) nm filename > temp    --> This is called output redirection. Output of file will be stored in temp.
By opening temp file we can see which all function definitions have been linked with our main file.

6) gcc -c filename.c -o filename.o   --> '-c' means you are asking compiler to stop compilation after assembler.  
    filename.o is an object file which will be created using above command. In above command,'-o filename.o' is optional.

7) ar -rcsv libabc.a sum.o mul.o print.o   --> libabc.a is the name of the static  library you want to create , in which you will be putting the 3 .o files.
   
   meaning of command : archive file creation ( That is static library) 
                        r c s v ,
                        r = replace objects in already present library with the new once provided in command line.
                        c = do not warn if library is newly created
                        s = tells ar to create a symbol table, gcc needs this table when we are using the library
                        v = verbose mode , tells ar to keep you informed about what it's doing.

8) ar -t libabc.a     --> Displays what all object files were used into creation of library

9) ar -r libabc.a sum.o  --> If you want to replace sum.o object file in the library libabc.a

10) cc -c -fpic filename.c  --> Command to create .o files from .c files to fill into dynamic library. (fpic stands for "position independent code")

11) Command to create a dynamic Library out of the .o files  mentioned above.
    -->    cc  -shared  -o  libmno.so  sum.o  mul.o  print.o
    Therefore , libmno.so is a dynamic library made out of sum mul and print.o

12) ps -e  -->  ps means process list, -e means all the terminals which are open right now, l means long list.

13) Signal 19 to suspend the process , 18 to resume the process, 9 to terminate the process forcefully.

Topics that we will be studying going ahead :

- Process and process management
- Signal Handling
- File and File Management
- Process Synchronization using Semaphore 
- Threads and Multi-threading
- Memory Management


Operating System :

An operating system consists of two parts , applications and kernel.
Applications and Kernel are combinedly called as OS. Kernel consists of services and managers like network manager/memory manager/hardware manager, etc ... 
Kernel is backbone of operating system and should mandatorily be there for seamless operation of application. 

Booting steps of Linux Operating System :

BIOS
MBR
GRUB
Kernel


1) BIOS 
Basic Input/Output System.

Performs system integrity check (ex : sometimes on turning onn CPU , you will get blue screen BIOS error. It does a quick check of basic input output peripherals, like RAM, ROM, Hardisk, Motherboard.)
BIOS is usually return in Assembly (Low level program) example companies - American Megatrends (AMI).
So BIOS will check all these essential hardwares required for loading the Bootloader program and if any issue is found in the process, blue screen BIOS error will appear.

In BIOS you can change, from where the operating system is supposed to be fetched - from bootable pendrive/ from CD/ From network., etc
Can also change the boot sequence by updating 1st/2nd bootable priorities.

Bootloader Program is loaded in the ROM chip by Motherboard or Controller Manufacturer


2) MBR 
Master Boot Record - located in first sector of hardisk.

BIOS program further initiates MBR. 
MBR is less than 512 bytes in size. 
MBR contains information about GRUB.
MBR is one file/list present in starting sector of your bootable device. In that starting sector GRUB is stored.


3) GRUB - Grand Unified Bootloader 
GRUB is a type of Bootloader. 

LILO is Linux Operating System's Bootloader. 
Similar to GRUB, Windows OS has NTLoader as its Bootloader.
Using GRUB you can load LINUX as well as WINDOWS.
Example, in lab systems you have dual booting options for both windows and linux/ubuntu.
If you have multiple kernel images installed on your system, you can choose the kernel which is to be executed. 
A default kernel needs to be set in case no specific kernel is selected by user while booting. 
This flexibility is provided to use by GRUB.
So task of GRUB is to load kernel into the RAM for execution.


4) Kernel 
Kernel is core of the Operating system.

In simple words loading a kernel basically means, loading the OS in the RAM. Similar to how application image file is loaded in ram once radar is booted in office.
In Linux, after kernel is loaded, it executed a program called "init" present in sbin folder of Linux OS.
In Windows, this program is found in C drive. 

Types of Files system :

Linux File systems -
- Ext2 file system
- Ext3 file system

Windows File system -
- FAT file system
- NTFS file system (Pendrive/Local Disk file systems)

So In step 4, first File system is mounted, 
then kernel gets loaded that is all managers are loaded.
Then kernel executes a program called init program.

Init program path in Linux -  /sbin/init_program
Init program path in Windows -  /C_drive/init_program


RAM space is divided in two parts - 
Kernel Space and User Space

Kernel space stores all managers. 
User space consists of our application and Programs 

So once file system is loaded in step 4, first program to run in user space is called init program or init process.

Entities that run in User space are called as processes.
Entities that run in Kernel space is called as services.

5) Init 
Init program is run by Kernel. Init executes run level programs. Such as different services - memory services, network services, etc.

6) Run level programs 
Runlevel programs are executed from /etc/rc.d/rc*


### Random Number Generation 

Header file needed for Rand function is <stdlib.h>.
Functions involved are Rand & Srand function.
These are predefined functions for which there are dedicated MAN pages. You should make habit of reading MAN pages.

- rand() function : This function generates random numnber between 0 and RAND_MAX (as per MAN page of RAND())
                    but the sequence of numbers it generates are usually of same sequence.

We use Srand function if we want to get random numbers.                    
- srand() function : This function generates random number based on a seed provided.

All these details can be seen in MAN page of these functions/stdlib.h.

Modulus operator (%)
It is basically the remainder calculating operator.

Example: 

Dividend = Divisor x Quotient + Remainder

Therefore, if 15 is divided by 2, Remainder = 1.
So, 15 % 2 = 1.

- X % Y is always in the range of 0 to Y-1.
ex: 
        X % 10 -> values from 0 to 9
        X % 100 -> Values from 0 to 99
        X % 51 -> Values from 0 to 50

This property is the key reason , modulus operators are used to generate random numbers.

If you want the range that does not start at 0, you can consider adding offset in the random number generation algorithm.
Example : 
            rand() % 100 + 50  
            Generates numbers in the range of 50 to 150.


#### Types of Linkings during compilation and execution of program :

Static/Compile time linking, Load time linking & Run time linking


Dynamic Runtime Linking:

Functions involved to implement dynamic runtime linking:

dlopen(): used for opening the lib and loading it into RAM. -> hdr file to include is <dlfcn.h>
          dlopen returns library start address, and 0 upon failure.

dlsym(): used for getting function address.
dlclose(): unloading lib from RAM to HDrive.
dlerror(): display proper error msg.

#### What is process ?
Whenever a file is compiled, an executable is created and is stored in Flash/ROM. When in Flash, this file has code and data section by default. When we run this executable, a copy/image of it is loaded into RAM, remember that a copy of executable is loaded without deleting the original one from Flash. When loaded into RAM, apart from code and data, even Heap and Stack section is created. Whenever an executable is loaded into RAM for execution , that becomes a *Process*.

Definition: Any file capable of getting executed is called program. Any program that can be loaded into RAM for execution is called Process.

Points to note :
- Size of executable file and process are different. Because executable file has only Data and Code section whereas process has Data, Code, Stack aswell as Heap section.

Types of Process Execution : Concurrent and Sequential process executions.

Process Manager : Manages execution of processes by CPU, because only 1 CPU but multiple processes. So Process manager manages seamless switching and execution by using a Single CPU Resource.

#### Multiprocessing 
Multiple applications running at the same time is called Multiprocessing. 
Types :
Hardware and Software Multiprocessing

##### Hardware Multiprocessing 
Every application has individual CPUs. Basically the system will be having more than one CPUs. 

##### Software Multiprocessing 
Single CPU handles multiple processes by process manager based programming.

#### Foreground and Background processes 

Foreground process : When we simply do a.exe or ./a.out for running the executible, we see something running in the bash as per the code. This is foreground process running. 

Background process : If you want to run a process in background , command -  " ./a.out & ".
After running this command , you will observe 2 numbers printed on screen. First represents "Job ID" , second represents "Process ID".

"ls" command tells us number of files present in the directory.

"ps" command lists the processes running in current terminal.

"ps -e" list of processes in system.

"ps -l" long list of processes in current terminal.

"fg" to move the background processes into foreground.

"size" this command displays size of object file or executible.

Ideally to kill/close the processes, you need to bring them to foreground. This can be done using fg command. This works on Stack principle.
That is , last in first out. Last process that goes in pops out first when we give fg command. 

If you want to kill the process without bringing it into foreground, you can use command - 

 kill -9 "process ID"

 example -  kill -9 6215 

 ### Process and Process Management

Run program has process ID of 1.

 Bash is a Shell. Shell is a command interpreter.
 Shell is a program used to interact with OS.

 Examples of shell : sh, bash, ksh, etc

 Flow of Communication :

 User -> Command Interpreter/Shell -> Kernel -> Hardware

 Important Definitions :

 Response Time : The time gap between the process loaded into RAM and its first instruction executed by the CPU.

 Starvation time : The time that a process underwent due to starvation for execution as the CPU could not attend it , is called starvation time.

 Turnaround time : Time gap between process loaded into RAM and its execution completed.

 Throughput : Number of processes completed per unit time


Lec-10 : To understand how a process switches between Ready/Run/Wait state, at times in the same program.
Check processes_1.c file for the same.

Every process has its own stack(8 mb), data and code section. If one process tries accessing another process memory, then we get segmentation fault(unauthorized memory access).
For every process, fixed time slot is allotted in case of concurrent execution.

Processes are present in user space. Process manager is present in Kernel space.
Process manager creates PCB (Process Control Block) for every process in Kernel space.

PCB contains following data for every process -
PID, PPID, Program Counter, Stack pointer, Memory limits

Every process has a separate PCB.
Based on the process which is being executed at an instance, CPU registers are loaded with data from PCB. Based on process switching,
from one process to another, loading and unloading of PCB data happens in CPU registers.
Even process manager itself is a process.

This loading and unloading of PCB data into CPU registers from process to process is called as Context Switching.
CPU switches between the processes when the time slice expires or when the timer interrupt comes.

Normally context switching happens after end of the process time slice, but there is possibility the process gets suspended or delayed before the completion of time slice. In that case also context switching happens.

Process Manager is a system level process. Process that process manager handles are user level processes. 
Between every user level process switching (context switching) , system process has to operate.

               


| Sr no | Library Functions   | System Calls |
| - |---- | ---- |
| 1 |   Supported by Compilers | Supported by Operating Systems |
| 2 | Another name is application programming Interface(API) | Another name is System Call Interface(SCI) |
| 3 | Writing program with APIs is called as application programming | Writing programs with SCIs is called System Programming |
| 4 |   Library functions are slower, but process calling library functions execute faster | System calls are faster but process calling system calls execute slower |
| 5 | Lib functions are user friendly, and task specific   | System calls are OS friendly and generic in nature |
| 6 |   Lib functions execute in user space | System calls execute in Kernel Space |


In Linux OS, use command " man man " to see the 9 subcategory divisons of man page.
Library functions internally make system calls.

Based on the categorizatiom shown in "man man", number 2 is for OS level function, 3 is for compiler supported functions.

Command used : man system
This is a compiler supported function which is used to execute a shell command.

Prototype :-
               int system (const char *command);
You can use this function to give command line level instructions through .c code. Such as- ls, ps, etc.