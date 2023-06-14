#include <stdio.h>

void main(){
	printf("Integer Size Taking in the meomory is : %lu",sizeof(int)); // int -> taking 4 bytes
	printf("\nstring Size Taking in the meomory is : %lu",sizeof(char)); // str -> taking 1 bytes
	printf("\nfloat Size Taking in the meomory is : %lu",sizeof(double)); //double  taking -> 8 bytes
	printf("\nLong int Size Taking in the meomory is : %lu",sizeof(long int));//Long int -> 16 bytes
}



