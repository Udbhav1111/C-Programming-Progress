//Q15
#include <stdio.h>
//length of string
int lenStr(char string[])
{
	int len=0,i;
	for(i=0;string[i]!='\0';i++)
	{
		len++;	
	}
	return len;
}

//Copy of string
void copyStr(char string[],char copy[])
{
	int i;
	for(i=0;string[i] != '\0';i++)
	{
		copy[i] = string[i];
	}
	copy[i] = '\0';
} 

//Reverse of String
void revStr(char string[])
{
	int i,str_Len=lenStr(string);
	int revlen = str_Len-1;
	char temp;
	for(i=0;i<str_Len/2;i++){
		temp = string[i];
		string[i] = string[revlen];
		string[revlen--] = temp;
	}
	printf("\nReverse string is %s",string);
	
}

//Comparison of String
int CompareStr(char string1[],char string2[])
{
	int flag=0,i=0;
	while(string1[i]!= '\0' && string2[i] != '\0'){
		if(string1[i] != string2[i]){
			flag = 1;
			break;
		}
		else{
			flag = 0;
		}
		i++;
	}
	return flag;
}

//MAIN FUNCTION
void main()
{
	char s[]="udbhav";
	char s2[] = "Carrer";
	
	int	lename = lenStr(s);
	printf("\nThe length of String is %d",lename);
	
	char cpy_str[lename];
	copyStr(s,cpy_str);
	printf("\nThe Copied String is %s",cpy_str);
	
	revStr(s);
	printf("\nThe comaprison of two strings are %d",CompareStr(s,s2));
}


