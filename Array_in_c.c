#include <stdio.h>
void main(){
	int list[4],i;
	for(i=0; i<4; i++)
	{
		printf("Please Enter the value of list %d: ",i);
		scanf("%d",&list[i]);	
	}
	printf("\n\n%d",list[0]);
}
