#include <stdio.h>
void main(){
	int a[4],i; // The array size is 4 we give the size in the square [] that means this array inky contain 4 digits. int only
	for(i = 0;i<4; i++){
		printf("Enter the value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i = 0;i<4; i++){
		printf("{",printf("%d",a[i]),"}"); // we can use nested printf means printf inside printf 
		
	}
}
