#include<stdio.h>
  2 #include<stdlib.h>
  3 
  4 void del(int *, int, int);
  5 int compare(const void *p,const  void *q)
  6 {
  7         int a,b;
  8         a=*(int *)p;
  9         b=*(int *)q;
 10 
 11         if(a>b)
 12         return 1;
 13 
 14         else if(a<b)
 15         return -1;
 16 
 17         else
 18         return 0;
 19 }
 20 
 21 void main()
 22 {
 23         int i,j,count,size,n;
 24 
 25         printf("Enter the no of elements : ");
 26         scanf("%d",&n);
 27 
 28         int a[n],g[n],sol[n];
 printf("Enter %d element(s)\n",n);
 31 
 32         for(i=0;i<n;i++)
 33         {
 34                 scanf("%d",&a[i]);
 35                 g[i]=a[i];
 36         }
 37 
 38         printf("Entered element(s) are\n");
 39 
 40         for(i=0;i<n;i++)
 41         printf("%3d %3d\n",a[i],g[i]);
 42 
 43         qsort(g,n,sizeof(int),compare);
 44 
 45         printf("\nArray element(s) after sorting are\n");
 46 
 47         for(i=0;i<n;i++)
 48         printf("%3d %3d\n",a[i],g[i]);
 49 
 50         for(size=n,count=i=0;i<n;i++)
 51         {
 52                 for(j=0;j<size;j++)
 53                 {
 54                         if(a[i]<g[j])
 55                         {
 56                                 sol[i]=g[j];
                                del(g,j,size);
 59 
 60                                 count++;
 61 
 62                                 break;
 63                         }
 64                 }
 65 
 66                 if(j==size)
 67                 {
 68                         sol[i]=g[0];
 69                         del(g,0,size);
 70                 }
 71                 size--;
 72         }
 73 
 74         printf("\nOptimized array element(s) after are\n");
 75 
 76         for(i=0;i<n;i++)
 77         printf("%3d %3d\n",a[i],sol[i]);
 78 
 79         printf("\nAnswer is %d\n",count);
 80 }
 81 
 82 void del(int *g, int j, int size)
 83 {
 84         for( ;j<size-1;j++)
        85   {
 86                 g[j]=g[j+1];
 87         }
 88 }
                         