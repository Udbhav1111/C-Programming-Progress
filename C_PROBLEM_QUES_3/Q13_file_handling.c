//Q13
#include <stdio.h>
void main()
{
	FILE *fptr = NULL;
	fptr = fopen("program.txt","w");
	char text[100];
	printf("Enter any text: ");
	scanf("%[^\n]s",&text);
	fprintf(fptr,"%s",text);
	printf("The content Inserted into program.txt successfully");
   	fclose(fptr);

}
