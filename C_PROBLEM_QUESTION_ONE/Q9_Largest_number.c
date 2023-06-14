#include <stdio.h>
void main(){
	int num1,num2,num3; float area;
	printf("Enter the Value of num1\n");
	scanf("%d",&num1);
	
	printf("Enter the Value of num2\n");
	scanf("%d",&num2);
	
	printf("Enter the Value of num3\n");
	scanf("%d",&num3);
	
	if((num1<num2) && (num2>num3)){
		printf("%d is Greater than %d and %d",num2,num1,num3);
	}
	else if((num1>num2) && (num1>num3)){
		printf("%d is Greater than %d and %d",num1,num2,num3);
	}
	else{
		printf("%d is Greater than %d and %d",num3,num1,num2);
		
	}	
}
