//Q5
#include <stdio.h>
void main(){
	int mat_a[2][3] = {{0,1,2},{3,4,5}};
	int mat_b[2][3] = {{1,1,1},{1,1,1}};
	int row,col,sum[2][3];
	
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			sum[row][col] = mat_a[row][col] + mat_b[row][col];
		}
	}
	printf("The Matrix After Addition is:\n");
	
	for(row=0;row<2;row++){
		for(col=0;col<3;col++){
			printf("%d\t",sum[row][col]);
		}
		printf("\n");
	}
	
}
