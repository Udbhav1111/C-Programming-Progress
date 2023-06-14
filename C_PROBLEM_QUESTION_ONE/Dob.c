#include <stdio.h>
void main()
{
	char name[100],dob[100],phone[10];;
	printf("Enter Your Name:");
	scanf("%s",&name);
	printf("\nEnter Your DateOFBirth like this ex: (1-Jan-2004): ");
	scanf("%s",&dob);
	printf("\nEnter Your Phone no.: ");
	scanf("%s",phone);
	printf("\nYour name is %s DateofBirth is %s and Mobile Number is %s ",name,dob,phone);
}
