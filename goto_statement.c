#include <stdio.h>
int main(){
	//GOTO --> Statement send you to a particular Code written
	label:
		printf("we are inside the lable ");
		goto end;
		
	goto label;
	
	end:
		printf("\nwe are at the end");
	return 0;
}
