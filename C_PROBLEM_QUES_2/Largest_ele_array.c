//Q4
#include <stdio.h>
void main(){
	int max,i,arr[5]={10,20,30,5,50};
	max = arr[0];
	
	for(i=0;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		
	}
	printf("The Largest Element in Array is: %d",max);
	
	
}
