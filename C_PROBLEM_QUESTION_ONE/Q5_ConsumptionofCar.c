#include <stdio.h>
void main()
{
	float fuel,km;
	printf("Enter the fuel used By Cars : ");
	scanf("%f",&fuel);
	
	printf("Enter the KM you have traveled: ");
	scanf("%f",&km);
	
	printf("The average consumption of Car is: %.2f",(km/fuel));
}
