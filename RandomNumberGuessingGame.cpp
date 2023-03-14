// RandomNumberGuessingGame.cpp by Aaron Manalili

#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main() {

	srand(time(NULL)); // srand is used to generate random numbers
	int randomNumber = 1 + (rand() % 100); // randomNumber will select a random number from 1 to 100
	int chance = 5;
	int userNumber;

	cout << "This program is a simple game where a random number is generated. \n";
	cout << "The rule is for you, the player, to guess the random number correctly. \n";
	cout << "If you guess the number correctly, you win. \n";
	cout << "If you don't guess it right the first time, you lose a chance. \n";
	cout << "If you lose all chances, you lose the game. \n";
	cout << "Good Luck! \n";

	for (int i = 0; i <= 5; i++) {
	
		cout << "Take a guess \n";
		cin >> userNumber;

		if (userNumber != randomNumber) {
			
			cout << "The number you entered is not the random number. \n";
			chance--;
			cout << "You have " << chance << " attempts left. \n";
		}

		if(userNumber == randomNumber) {
			
			cout << "You've guessed the random number correctly! \n";
			cout << "You win! \n";
			return 0;
		
		}

		if (chance == 0) {
		
			cout << "Game Over! \n";
			cout << "The random number was: \n" << randomNumber;
			return 0;
		}
	}


}
