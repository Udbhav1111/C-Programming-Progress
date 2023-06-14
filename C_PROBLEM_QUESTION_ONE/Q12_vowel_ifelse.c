#include <stdio.h>
void main(){
	char word;
	printf("Enter the word To check if it's vowel or not? ");
	scanf("%c",&word);
	(word == 'a' || word == 'e' || word == 'i' || word == 'o' ||word == 'u') ? printf("It is a Vowel") : printf("It is a Consonant");
}
