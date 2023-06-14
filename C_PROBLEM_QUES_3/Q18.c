#include <stdio.h>
#include <stdlib.h>

void main()
{
	char fname[20], ch;
	FILE *fpts, *fptt;
	
	printf("\n\n Encrypt a text file :\n");
	printf("--------------------------\n"); 	
	
	printf(" Input the name of file to encrypt : ");
	scanf("%s",fname);	

	fpts=fopen(fname, "r");
	fptt=fopen("temp.txt", "w");

	while(1)
	{
		ch=fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch+100;
			fputc(ch, fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w");

	fptt=fopen("temp.txt", "r");

	while(1)
	{
		ch=fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fpts);
		}
	}
	printf(" File %s successfully encrypted ..!!\n\n", fname);
	fclose(fpts);
	fclose(fptt);
}

