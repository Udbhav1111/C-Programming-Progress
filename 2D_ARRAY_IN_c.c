#include <stdio.h>
void main(){
	int a[4]; // This is the normal or 1D array having size 4
	int j[2][3]; // this is the 2D array Having size 3 means [],[] having 3 value or elements inside it [[1,2,3],[1,2,3]] 
	int x,y;
	//creating nested loop for 2d array
	for(x=0;x<2;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("\nEnter the Value of j[%d][%d]: ",x,y);
			scanf("%d",&j[x][y]);
		}
	}
	/////////////////////////////////////////////////////////////////////////////////////////////
	printf("\n\n -- Printing The values -- ");
	for(x=0;x<2;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("\n %d ",j[x][y]);
			
		}
		printf("\n");
	}
	
}
