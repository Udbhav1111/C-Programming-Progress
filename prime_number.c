#include <stdio.h>
void main(){
	int i;
	printf(" Even Numbers 1 to 100 --\n");
	for(i=1; i<100;i++){
		if((i%1==0) & (i%i==0)){
			printf("%d\n",i);
		}
		
	int j,k;
	printf("\n TABELS \n");
	for(j=1;j<=10;j++){
		for(k=1;k<=10;k++){
			printf("%d\t",j*k);
		}
		printf("\n");
	}
}
