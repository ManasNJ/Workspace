
//  Below program demonstrates how Dynamic Runtime Linking is utilized to save the RAM from unnecessarily getting occupied.
//  The "libmno.so" is added in RAM only when dlopen is called, apart from that it will always stay offloaded. 
// also as soon as our work with the library is done , it will get offloaded from RAM through dlclose command.


#include <stdio.h>
#include <dlfcn.h>

int main(){

    	int i=10, j=20, k;
    	void *handler;
	
    	int (*p)(int,int);    //Function Ptr declaration
	
    	printf("Enter your option :\n 1) Sum \n 2) Mul\n");
   	scanf("%d", &op);

    	if(1==op){    // THis option selection check based on user input happens at runtime.
	
		handler = dlopen("./libmno.so", RTLD_LAZY);    //dlopen() is used for opening the library (loading the library into RAM)
              						     // RTLD_LAZY is a flag. You can find details on that in MAN page of dlfcn header. It does late binding.
									// RTLD_NOW would be early binding.
		//dlopen() returns library starting address in success and 0 in failure.
	}
	
	if(0 == handler){
	
			printf("%s\n", dlerror());			// dlerror function displays the error message.
			return ;
	}

	p = dlsym(handler, "sum");          // dlsym function is used for getting specific function's address from library (in this case sum function address).
							// args passed - library address , and needed function address function's name.
	// p holds sum function's address.			

	if(0 ==p ){
		
			printf("%s\n", dlerror());
			return ;
	}

	k = (*p)(i,j);
	printf("k = %d\n", k);

	dlclose(handler);               // after our work is done , we are closing/unloading the library.	

	}

	else if(2 == op){
	
	handler = dlopen("./libmno.so", RTLD_LAZY);    //dlopen() is used for opening the library (loading the library into RAM)
              						     // RTLD_LAZY is a flag. You can find details on that in MAN page of dlfcn header.
	//dlopen() returns library starting address in success and 0 in failure.

	if(0 == handler){
	
		printf("%s\n", dlerror());			// dlerror function displays the error message.
		return ;
	}

	p = dlsym(handler, "mul");          // dlsym function is used for getting specific function's address from library (in this case sum function address).
							// args passed - library address , and needed function address function's name.
	// p holds sum function's address.			

	if(0 ==p ){
		
		printf("%s\n", dlerror());
		return ;
	}

	k = (*p)(i,j);
	printf("k = %d\n", k);

	dlclose(handler);               // after our work is done , we are closing/unloading the library.		
	
	}

}


/* Very important point :
	If for compiling this code, you just do " cc p1.c"
	You will get linker error for all the functions. As the compiler can't find its definitions for linking.

	All these Func Defs are present in 'dl' library which doesn't get linked by default. You have to explicitly ask compiler in the command to link with dl library. 
	Otherwise compiler will just link with default libraries. 2 OS libs & 1 libc.so.
	So the function definitions we need are not  present in these above 3 libraries.

	We need to give command , "cc p1.c -ldl"
*/