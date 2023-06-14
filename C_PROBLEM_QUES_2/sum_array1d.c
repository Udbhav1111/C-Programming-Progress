//Q13
#include <stdio.h>
int arrSum(int arr[])
{
	int i,sum=0;
	for(i=0;i<6;i++){
		sum = sum + arr[i];
	}
	return sum;
}

void main()
{
	int array[] = {5,5,5,5,5,5} ;
	printf(" The Sum of array elements is %d",arrSum(array));
	
	
}
