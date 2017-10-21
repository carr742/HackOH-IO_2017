#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>

int main() {
	//Start the word and blank character arrays

	char word[] = "potato";
	char blank[] = "______";
	printf("Six letter word");
	
	//Set guesses to 10 and intialize variables

	int guess = 10, k, correct;
	char letter;
	
	//Guessing loop

	while (guess > 0) {

		printf("\nYou have %d guesses left.", guess);	//Show how many guesses are left

		correct = 0;							//Value of correct is initially zero at the start

		printf("\n%s", blank);					//Display the blank underscores array

		//Guess a letter

		printf("\nGuess a letter: ");
		scanf(" %c", &letter);					//Put space before %c because whitespace crap

		//See if letter is part of word array over a loop

		for (k = 0; k <= 6; k++) {
			//Testing each individual element

			if (word[k] == letter) {
				printf("\nCorrect letter!");	//Display that the answer was correct
				blank[k] = letter;				//Replace that element of blank with the letter
				word[k] = '_';					//Replace the element in word with underscore
				correct = 1;					//Make correct equal to 1 to show that a correct letter was guessed on this loop
				break;							//If word is correct, exit the for loop
			}

		}
		
		if (correct == 0) {

			printf("\nIncorrect guess!");
			guess--;
		}

		
	}

	system("pause");
}
