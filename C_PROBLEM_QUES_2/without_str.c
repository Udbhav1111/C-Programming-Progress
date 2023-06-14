//Q8
#include <stdio.h>
void main(){
	char str1[10],str2[10],copystr[10],rev[10],temp,flag=0;
	int i=0,j=0,len=0;
	
	printf("Enter any text for string1: ");
	scanf("%s",str1);
	printf("Enter any text for string2: ");
	scanf("%s",str2);
	
	//length
	for(i=0;str2[i]!='\0';i++){
		len++;	
	}
	printf("\nThe length of string2 is %d",len);
	
	//copy
	for(i=0;str1[i] != '\0';i++){
		copystr[i] = str1[i];
	}
	printf("\nThe Copy string1 to copystr is %s",copystr);
	
	//reverse
	int revlen = len-1;
	for(i=0;i<len/2;i++){
		temp = str2[i];
		str2[i] = str2[revlen];
		str2[revlen--] = temp;
	}
	printf("\nReverse of String is %s",str2);
	
	//Comparision
	while(str1[i]!= '\0' && str2[i] != '\0'){
		if(str1[i] != str2[i]){
			flag = 1;
			break;
		}
		else{
			flag = 0;
		}
		i++;
	}
	printf("\nThe Comparison of String1 and String2 is %d",flag);
}
