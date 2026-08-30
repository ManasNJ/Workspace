
#include <stdio.h>

void selectionSort(int arr[5], int l){
	
	for(int i=0; i<l-1; i++){
	
	int min_idx=i;

		for(int j=i+1; j<l; j++){
		if(arr[j]<arr[min_idx])
		min_idx=j;
		}

		if(min_idx != i){
		int t = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = t;
		} 
	}
}
		

int main(){
	int a[5] = {12, 2, 4, 5, 1};

	int l = sizeof(a)/sizeof(a[0]);

	selectionSort(a, l);

	for(int i=0; i<l; i++)
	printf("%d\t", a[i]);

	}
