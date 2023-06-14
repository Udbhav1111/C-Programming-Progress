//Q1
#include <stdio.h>
void main()
{
	int a = 5;  
	int *ptra = &a;
	
	printf("The address of pointer is %i  and the addres of a variable is %i",&ptra,&a);
	printf("\nThe value at address of pointer is %d and value of variable a is %d",*ptra,a)bn;
}
