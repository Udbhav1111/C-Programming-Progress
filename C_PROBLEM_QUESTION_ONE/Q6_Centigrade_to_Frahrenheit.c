#include <stdio.h>
void main()
{
	int C;
	printf("Enter the Value of Centigrade: ");
	scanf("%d",&C);
	
	printf("%d centigrade is %.f Fahrenheit ",C,((C*1.8)+32));
}
