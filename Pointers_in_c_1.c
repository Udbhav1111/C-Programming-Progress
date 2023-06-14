#include <stdio.h>
void main(){
	//Pointers in C
	/*
	1 - pointers in C store the variable address inside it 
	2 - while creating prointers you can access the variable value or address through that pointer
		so it is basically a linked variable ( a -> b , b <- a)
	3 - You can Use %p - format specifer to view the address of the pointer which is linked to another variable
		address 
	4 - '*' use this to print the value from the pointer basically (*) know as inderction operator which is used to display
		the value with Specific format specifier  - (%d,%s,%c)
	5 - this is also help in creating a pointer - > (* ptr_a =  &(variable) -> this is a pointer
	6 - * -> astricks , & -> anpercent
		
	For example given below
	*/
	
	int a = 5; // a is a variable which store some integer value inside it 
	int *ptra = &a;
	printf("The address of pointer to a is %p",&ptra); //address of pointer a it have its own address also.if we type &
	printf("\nThe address of  a is %p",&a); // they both have same address
	printf("\nThe address of pointer is %p",ptra); // ptra and a -> same address
	
	printf("\nThis Address (pointer to a = %p) can be accessed by this (pointer address = %p)",&ptra,ptra);
	printf("\n\n Fetching the value from the pointer -> %d",*ptra);// this * help to fetch the value from that pointer ptra
	
}
