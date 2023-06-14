#include <stdio.h>
void main()
{
	int days;
	printf("Enter Days To calculate Years: ");
	scanf("%d",&days);
	if(days/365 >=4){
		days++;
		goto end;
	}
	if(days<=182){
		printf("\n%d Days is Reaching Half years and %d weeks",days,(days/7));
	}
	else if(days<365){
		printf("\n%d Days is Completed Half years and %d weeks",days,(days/7));
		goto final;
	}
	else if(days==365){
		goto end;
	}
	end:
		printf("\n%d Days is %d years and %d weeks",days,(days/365),(days/7));
	final:
		printf("");
		
	
		
}
