//Header file
#include <stdio.h>

//Main Program Start From Here
int main()
{
	int a,b,c;
	//printf -> is a function which display (the text or number or something which is return inside it)
	//scanf -> is a function which works as input (it use if we want to take any user input)
	// %d -> int 
	// %s -> str
	// %f -> float
	printf("Enter Value a :");
	scanf("%d",&a);
	
	printf("Enter Value b : ");
	scanf("%d",&b);
	
	c= a+b;
	printf("The Addition of  %d and %d is %d",a,b,c);
	return 0;
	
}
// Flow of C program
/*
pre-processing -  #removeing of all commment's
compilation - 
assembly -
Linking -
Loading - #Program loaded in ram 

*/
