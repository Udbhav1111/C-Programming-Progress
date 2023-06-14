#include <stdio.h>
void main(){
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	if((year%4==0)){
		printf("it is a Leap year");
	}
	else{
		printf("It is not a Leap year");
	}
}
