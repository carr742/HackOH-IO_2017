#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>
#include <array>

int main() {
	//Word to guess

	char word[] = "";
	printf("Please enter a word to guess: ");
	scanf("%s", word);

	//Length of string
	int length;
	length = strlen(word);
	printf("The mystery word has %d letters.", length);

	//Create blank with length number of underscores
	char blank[] = "";
	int t;

	for (t = 0; t < length; t++) {
		blank[t] = '_';
	}
	
	//How many guesses?
	int guess, k, correct;

	printf("\nHow many guesses will you get? ");
	scanf("%d", &guess);
	
	char letter;

	system("CLS");						//Clear the screen so the player can't see the word lol
	
	//Guessing loop

	while (guess > 0) {

		printf("\nYou have %d guesses left.", guess);	//Show how many guesses are left

		correct = 0;							//Value of correct is initially zero at the start

		printf("\n%s", blank);					//Display the blank underscores array

		//Guess a letter

		printf("\nGuess a letter: ");
		scanf(" %c", &letter);					//Put space before %c because whitespace crap

		//See if letter is part of word array over a loop

		for (k = 0; k <= length; k++) {
			//Testing each individual element

			if (word[k] == letter) {
				printf("\nCorrect letter!");	//Display that the answer was correct
				blank[k] = letter;				//Replace that element of blank with the letter
				word[k] = '_';					//Replace the element in word with underscore
				correct = 1;					//Make correct equal to 1 to show that a correct letter was guessed on this loop
				break;							//If word is correct, exit the for loop
			}

		}
		
		//Show for incorrect guess

		if (correct == 0) {

			printf("\nIncorrect guess!");
			guess--;
		}

		//If user has finished guessing the word
		int finish = 0;
		for (k = 0; k < length; k++) {
			if (word[k] == '_') {
				finish++;
			}
		}

		if (finish == length) {
			correct = 2;
			break;
		}


	}
	if (correct == 2) {						//Word is guessed correctly
		printf("\nCongrats on guessing the word: %s!\n", blank);
	}
	else {
		printf("\nYou are out of guesses!");	//Ran out of guesses
	}
	system("pause");
}
