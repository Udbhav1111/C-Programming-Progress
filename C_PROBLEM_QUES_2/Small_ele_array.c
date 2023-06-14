//Q3
#include <stdio.h>
void main(){
	int min,i,arr[5]={10,20,30,5,50};
	min = arr[0];
	
	for(i=0;i<5;i++){
		if(arr[i]<min){
			min = arr[i];
		}
		
	}
	printf("The Smallest Element in Array is: %d",min);
	
	
}
