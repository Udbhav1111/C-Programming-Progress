#include <stdio.h>
void main()
{
	char name[10];
	int date,month,year;
	printf("Write your date of birth like (11/01/2003): ");
	scanf("%d/\n%d\n/\n%d",&date,&month,&year);
	
	
	printf("Enter your name: ");
	scanf("%s",&name);
	
	printf("Your name is %s\n",name);
	printf("Your date of birth is %d/%d/%d",date,month,year);
	
}
