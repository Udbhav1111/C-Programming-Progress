#include <stdio.h>
void main(){
	int num;
	printf("Enter the Value of Num: ");
	scanf("%d",&num);
	if(num<0){
		printf("It is Negative number");
	}
	else if(num>0){
		printf("it is Positive number");
	}
	else{
		printf("the given number is Zero");
	}
}
