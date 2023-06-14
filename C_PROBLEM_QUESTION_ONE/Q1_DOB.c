#include <stdio.h>
void main()
{
	int date,month,year;
	printf("Enter Your Birth Date: ");
	scanf("%d",&date);
	
	printf("Enter Your Birth Month: ");
	scanf("%d",&month);
	
	printf("Enter Your Birth Year: ");
	scanf("%d",&year);
	
	printf("Your DateofBirth is %d/%d/%d",date,month,year);	
}
