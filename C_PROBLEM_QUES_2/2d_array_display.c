//Q14
#include <stdio.h>
void arr2D(int arr[2][2])
{
	int row,col;
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d\t",arr[row][col]);
			
		}
		printf("\n");
	}
}

void main()
{
	int array[2][2] = {{1,2},{3,4}} ;
	printf(" The elements present in the 2D-array is : \n");
	arr2D(array);
	
	
}
