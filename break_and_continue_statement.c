#include <stdio.h>
void main()
{
	
	int k;
	for(k=0; k<15; k++){		
		if(k==10){
			continue;
			// continue will igonre the code written below inside the continue statement IN SHORT WORDS IT DON'T STOP  THE LOOP	
		}
		else
		{
			printf("\n k = %d",k);//than run the  statement that written outside continue statement
		}
	}
}
