#include <stdio.h>

void main() {
    FILE *textfile;
    textfile = fopen("program.txt", "r");
    char line[1000]; 
	fgets(line,1000,textfile);
	printf(" -The Content Inside File is- \n");
    printf("%s",line); 
     
    fclose(textfile);
}
