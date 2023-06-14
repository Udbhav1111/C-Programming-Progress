#include <stdio.h>
void main(){
	int age;
	printf("Enter Your age: ");
	scanf("%d",&age);
	
	switch(age){
		case 3:
			printf("The age is 3");
			break ;
		case 13:
			printf("The age is 13");
			break ;
		case 23:
			printf("The age is 23");
			break ;
		default:
			printf("The age is %d",age);
			
	}
}

/*
Use Points:
1 -  use break statement in every case (if you don't all the case will run and not only particular case is run)..
2 - don't use break in default case beacuse the switch automatically ends there..

*/
