#include<stdio.h>
  2 #include<stdlib.h>
  3 //#include<limits.h>
  4 
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
 23         int n,l,r,i, minval;
 24 
 25         printf("Enter the no of elements : ");
 26         scanf("%d",&n);
 27 
 28         int a[n];
            printf("Enter %d element(s)\n",n);
 31 
 32         for(i=0;i<n;i++)
 33         scanf("%d",&a[i]);
 34 
 35         printf("Entered element(s) are\n");
 36 
 37         for(i=0;i<n;i++)
 38         printf("%d\n",a[i]);
 39 
 40         for(l=0, r=n-1, i=0; i<=r-l; i++)
 41         a[l+i]=a[l+i]&a[r-i];
 42 
 43         printf("\nArray element(s) after operation are\n");
 44 
 45         for(i=0;i<n;i++)
 46         printf("%d\n",a[i]);
 47 
 48         for(minval= __INT_MAX__, i=0; i<n; i++)
 49                 if(a[i]<minval)
 50                         minval=a[i];
 51 
 52         qsort(a,n,sizeof(int),compare);
 53 
 54 
 55         printf("\nArray element(s) after operation and sorting are\n");
            
            for(i=0;i<n;i++)
 58         printf("%d\n",a[i]);
 59 
 60         printf("\nAnswer is %d %d\n",a[0], minval);
 61 }
