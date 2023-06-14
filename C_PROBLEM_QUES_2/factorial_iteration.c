//Q10
#include <stdio.h>

float fact(int num)
{
	int i;
	float factorial=1;
	if(num == 0 && num == 1)
	{
		return 1;
	}
	
	for(i=1;i<=num;i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}

void main()
{
	int number = 5;
	printf("The factorail through iteration function of number %d is %.f",number,fact(number));
	
}
