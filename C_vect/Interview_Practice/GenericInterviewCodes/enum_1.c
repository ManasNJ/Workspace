#include<stdio.h>
int main()
{
	enum days{mon=-1, tue, wed=6, thu, fri, sat};
	
	printf("%d %d %d %d %d %d\n", mon+1, tue, wed, thu, fri, sat);
	return 0;
}	