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
	
	//Initialize the guessing loop

	int guess = 10, k;

	while (guess > 0) {

		char letter;
		int correct = 0;

		printf("\n%s", blank);

		//Guess a letter

		printf("\nGuess a letter: ");

		scanf("%c", &letter);

		for (k = 0; k <= 6; k++) {
			if (word[k] == letter) {
				printf("\nCorrect letter!");
				blank[k] = letter;
				word[k] = '_';
				correct = 1;
				break;
			}

		}

		if (correct == 0) {
			printf("Incorrect letter!");
			guess--;
		}
	}

	system("pause");
}
