/*
There are three types of loops in c
 1 - do while loop
 2 - for loop
 3 - while loop
 
 #################################
 SYNTAX OF (DO LOOP)
 --  
 
 do {code to be executed} while(condition) 
 
 --
 do while loop executes at least once and the other depend upon the condition
 */
 

//DO WHILE LOOP
//PRINTING THE NUMBER FROM 1 to n
 
#include <stdio.h>
void main(){
	//declaring and initializing variable 
	int num,index=1;
	
	//getting input from the user
	printf("Enter a Number:\n");
	scanf("%d",&num);
	
	//do loop start from here
	do{
		printf("%d\n",index);
		
		//incrementation in index
		index = index + 1;
		
	}while(index<num+1);
	
}
