// FOR LOOP IN C
/*

 -- > points to be noted

1 - the for loop is used to iterate teh statements or a part of the program several times
2 - it is used to traverse the data structures like the arrays and linked list 
3 - it has little different syntax than while loop and do while loops.

SYNTAX OF FOR LOOP IN "C"

-syntax

for(expression 1; Expression 2; Expression 3 ){
	//code to be executed
}

(EXPRESSION - 1) -> initalization

1 - Expression 1 -> we can initialize more than one variable in expression 1
2 - after run once it will implement or run expression 3 than check expression 2

(EXPRESSION - 2) -> COndition Expression

1 - it check the specific condition to be satisfied
2 - it can have more than one condition
3 - it is optional
4 -  can perform the task of expression 1 and expression 3
5 - In c programming  0 = False , 1 = True


(EXPRESSION - 3)


1 - Used to update Loop variable
2 - We can update more than one variable at some time
3 - It is oprional

* IMPORTANT *

-- if any variable aready initialize (int i = 1, j =2) than we don't need expression 1 in FOR loop (Expression 1 is not must)

*/

#include <stdio.h>


void main(){
	
	int j= 0,i = 0;
	
	// with Expression one ->  ###  for( i = 0,j = 0; i < 5; i++)
	
	//We don't need expression 1 if we initialized our variable in above in program - >  ### for( ; i < 5; i++)
	for( ; i < 5; i++){
		printf("i = %d  j = %d\n",i,j);
	}
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// expression 2
	int a = 0 ,b = 0;
	
	// in this case it will equal b = 3 but accept the next condition which you have write next to it [ 1 condition - (b<43) ] [ last condition - (a = 3)]
	for(; b=3,a < 5; a++){
		printf("\nExpression 2\n");
		printf(" a = %d  b = %d\n",a,b);
		b++;
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//expression 3
	int start = 0 ,end = 0;
	
	// 
	for(; start < 5; start++,end++){
		printf("\nExpression 3\n");
		printf(" start = %d  end = %d\n",start,end); 
		
		// we can write start++ and end++ over here also so it was Optional to write this in for
		
	}
	
	
}

