#include <stdio.h>
void main()
{
	
	
	//Break Statement
	int i,age;
	for(i=0; i<10;i++){
		printf("\n Enter your age %d\n: ",i);
		scanf("%d",&age);
		
		if (age==20){
			break;
			// Break is used to stop the loop if the codition given become true
		}
		
		
		
		
		
		// Continue Statement
		int k;
		for(k=0; k<10;k++){
			
			if (k==5){
				printf("\n 5 is skipped");
				continue;
				// continue will igonre the code written below inside the continue statement	
			}
			
			printf("\n k = %d",k);//than run the  statement that written outside continue statement
			
		}
	}
	
	
}
