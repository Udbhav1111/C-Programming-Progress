//Q20
#include <stdio.h>
#include <stdlib.h>
void main()
{
	printf(" -- WELCOME TO HANGMAN GAME --\n");
	srand(time(NULL)); //only do this once
	char won_char = (rand()%(90-65))+65;
	printf("%c",won_char);
	char guess_char;
	
	int chances = 5;
	while(guess_char != won_char){
		printf("\nEnter a Capital Charchter between A-Z: ");
		scanf("\t%c",&guess_char);
		
		if(guess_char == won_char){
		printf("\nCongratulations You guess the correct Charchater!!");
		}
		if(chances > 0){
			printf("\nYour Chances Remaing %d",chances);
			chances--;
		}
		
		else if(chances == 0){
			printf("\n You Loose Better luck next time");
			break;
		}
		
		
	}
	
	
}
