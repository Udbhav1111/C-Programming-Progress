#include <stdio.h>
void main(){
	//POINTERS ARTHEMETIC
	int a[] = {3,4};
	int* ptr_a = &a; //Creating pointer for a
	printf("%d\n",&ptr_a[0]);
	ptr_a = ptr_a+2; //This will incraese the (sizeof) operator My Sys_Arch -> it will increase 4 bytes
	printf("%d\n",&ptr_a[0]);
	printf("%d",&ptr_a[1]);
	//We can't do +,- in the const variable which we created it will throw an Error.
}
