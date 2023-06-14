#include <stdio.h>
void main()
{
	int i,j,rows = 5;
	for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            printf("i= %d and j= %d |",i,j);         
        }
        printf("\n");
    }	
}
