#include <stdio.h>

//Creating Function outside main function with argument and return value
int sum(int a,int b){
	return a+b;
}

//function with argument but without return value
void printstar(int n)
{
	int i = 0;
	for( ;i<n; )
	{
		printf("%c",'\n*');
		i++;
	}
}
void main(){
	int a=2,b=4,c;
	c = sum(a,b);
//	printf("The sum is %d",c);
	printstar(7);
}
