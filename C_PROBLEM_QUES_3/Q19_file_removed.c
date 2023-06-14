//Q19
#include <stdio.h>
#include <stdlib.h>
void main()
{
	char filename[100];
	printf("Please Enter the File Name?:  ");
	scanf("%s",&filename);
	
	remove(filename);
	printf("\nYour File named %s has been removed Successfully!",filename);
}
