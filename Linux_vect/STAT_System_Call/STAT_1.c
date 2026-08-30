#include "header.h"
int main(int argc, char **argv)
{
    if(argc!=2)
    {
        printf("Usage: ./a.out <filename>\n");
        return 1;
    }

    struct stat v;

    if(stat(argv[1],&v)<0)  // In this statement, we are making functiion call to stat() , we are passing the filename and &v, stat() will fill the structure v with the file information. If stat() fails, it returns -1 and sets errno. 
    {                       // File manager gets info about the file from the INODE block.
        perror("stat");
        return 1;
    }

    printf("Size of File = %ld\n",v.st_size);
    printf("Inode number = %lu\n",v.st_ino);
    printf("st_mode : %o\n", v.st_mode);

    /* There are certain macros that we can make  use of to know the file type */
    if(S_ISREG(v.st_mode))
    printf("Regular file\n");

    else if(S_ISDIR(v.st_mode))
    printf("Directory file\n");
}