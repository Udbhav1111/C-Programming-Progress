//Q12
#include <stdio.h>
void arrprint(int arr[])
{
	int i;
	for(i=0;i<6;i++){
		printf("%d\n",arr[i]);
	}
}

void main()
{
	int array[] = {11,12,13,14,15,16} ;
	printf(" The elements present in the array is : \n");
	arrprint(array);
	
	
}
