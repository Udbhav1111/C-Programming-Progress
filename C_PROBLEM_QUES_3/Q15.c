#include <stdio.h>
#include <string.h>


void main()
{
	int MAX_LINE_LENGTH = 1000;
	int LSIZ=128,RSIZ=10;
	char line[RSIZ][LSIZ];

    FILE *fptr = NULL; 
    int i = 0;
    int tot = 0;
    //
	fptr = fopen("program.txt", "r");
	while(fgets(line[i], LSIZ, fptr)) 
	{
        line[i][strlen(line[i])+ 1] = '\0';
        i++;
    }
    
    
    //
    printf("-The Content of the file is-\n");
    tot = i;
    for(i = 0; i <tot; ++i)
    {
        printf(" %s\n", line[i]);
    }
    printf("The lines inside the file are : %d\n",i);
}
