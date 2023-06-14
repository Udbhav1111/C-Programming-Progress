#include <stdio.h>
void main(){
	printf(" Enter your Age: ");
	int age;
	scanf("%d",&age);
	
	if(age>18){
		printf("You can vote!");	
	}
	
	else if(age<18){
		printf("Sorry you can'nt vote");
		
	}
	else{
		printf("please enter correct age");
	}
}
