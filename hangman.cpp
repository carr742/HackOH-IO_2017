#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
string decision, word, player1, player2;

int main() {
  string copy = word, decision;
	char i;
	
	cout << "HEY THERE EVERYBODY!!! READY TO PLAY HANGMAN? " << endl;
	cout << "Player 1, what is your name? " << endl;
		cin >> player1;
	cout << "Hello there, " << player1; 
	cout << ". Player 2, what is your name? " << endl;
		cin >> player2;
	cout << "Hey there, " << player2 << "! ";
	cout << player1;
	cout << ", Please type a word..." << endl;
		cin >> word;

	cout << "Your word is " << word;
	cout << " is that correct? (Y/N?) ";
		cin >> i;
	
	if (i == 'N')
	{
		cout << "Please type a word... " << endl;
		cin >> word;
		cout << "Your word is " << word;
	}
	if (i == 'Y')
	{
		cout << "Hooray!   " << endl;
	}
  
}
