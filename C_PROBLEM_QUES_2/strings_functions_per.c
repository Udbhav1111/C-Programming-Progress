//Q7
#include <stdio.h>
#include <string.h>

void main()
{
	char name[10];
	char fav_col[10];
	char new_str[10];
	
	printf("Enter Your First Name: ");
	scanf("%s",&name);
	
	printf("What is your Favorite Color: ");
	scanf("%s",&fav_col);
	
	
	printf("\nThe Comparison of two strings are: %d",strcmp(fav_col,name));
	printf("\nThe Concatenation of two strings are: %s",strcat(name,fav_col));
	printf("\nThe Copy of two strings are: %s",strcpy(new_str,fav_col));
	printf("\nThe Reverse Color string is: %s",strrev(fav_col));
	printf("\nThe length of string are: %d",strlen(name));
	
}
