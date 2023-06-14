//Q1
#include <stdio.h>
void main(){
	int i,arr[5];
	
	for(i=0;i<5;i++){
		printf("Please Enter Element -> %d:",i);
		scanf("\n%d",&arr[i]);
	}
	
	printf("\n -- Your Array Contains these elements given below -- \n");
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	
}
