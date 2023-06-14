//Q16
#include <stdio.h>
void main()
{
	char f1_line[1000];
	char f2_line[1000]; 
	FILE *file1;
	FILE *file2;
	
	
	file1 = fopen("file1.txt", "r");
	fgets(f1_line, 1000, file1);
	printf(" - file1.txt content is -\n");
	printf("%s",f1_line);
	
	
	file2 = fopen("file2.txt","w");
	fprintf(file2,"%s",f1_line);
	printf("\nCopied... File1 to File2");
	
	
	fclose(file2);
	fclose(file1);
	
}
