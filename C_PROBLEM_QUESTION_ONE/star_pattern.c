#include <stdio.h>
void main(){
	int i,j,rows;
	printf("How many rows do you want?:");
	scanf("%d",&rows);
	//Q20
	//This is for Start Patter Simple Asec
	for(i=1;i<rows; i++){ //this loop is for counting the rows
		for(j=1;j<=i; j++){// this nested loop is for printing the star how many times
			printf("%d",i);
		}
		printf("\n");
	}
	
	printf("\n\n");
	//Q22
	//This is for reverse Star Pattern Desc
	for(i=0; i<rows; i++){//this do not change beacuse this loop is counting rows
		for(j=0;j<=rows-i-1;j++){//a liitle bit of change here 
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	//Q19
	// Simple right angle triangle star
	for(i=0; i<rows; i++){//this do not change beacuse this loop is counting rows
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//Q25
	// Hallow reactangle Diagram
	for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)//this is the conditon if (i is 1) and (i is 5) and (j is 1) and (j is 5)    
			{
			printf("*");
			}           
                           
            else
			{
            	printf(" ");
			}                  
        }
        printf("\n");
    }		
}
