#include <stdio.h>

//Factorial Function
int factorial(int n)
{
	
	if(n==1 || n==0)
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1));
	}
	
}
///////////////////////////////////////////////////////////////////

void main()
{
	//Factorial Program using Simple iterative approach
	int i,n,result;
	printf("Please Enter Any Number To see its factorial: \n");
	scanf("%d",&n);
	result = 1;
	i = 1;
	while(i<=n)
	{
		result *= i;
		i++;
		
	}
	printf("The Factorial is : %d",result);
	
	//Factorial Program Using Recurrsive approach
	printf("\nThe Function factorial is : %d",factorial(n));
}

