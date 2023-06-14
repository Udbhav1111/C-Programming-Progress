#include <stdio.h>
void main(){
	int a,b;
	a = 1;
	b = 8;
	
	printf("Increment Operator");
	while(a<= b){
		printf("\n%d",a);
		a++;		
	}
	
	
	printf("\nDecrement operator --");
	while(b>=1){
		printf("\n%d",b);
		b--;	
		
	}
}
