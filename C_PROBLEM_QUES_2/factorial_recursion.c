//Q11
#include <stdio.h>

float fact(int n)
{
	
	if(n==1 || n==0)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
	
}

void main()
{
	int number = 5;
	printf("The factorail through iteration function of number %d is %.f",number,fact(number));
	
}
