#include <stdio.h>
void main(){
	int num,i,addtion;
	printf("Enter the Number: ");
	scanf("%d",&num);
	i = 0;
	addtion= 0;
	while(i<=num){
		i++;
		addtion = addtion + i;
		
	}
	printf("\n The Number is %d",addtion);
		
}
