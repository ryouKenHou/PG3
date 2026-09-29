#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>

void DelayReveal(void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess) {

	for (int i = 0; i < 20; i ++) {
		Sleep(delayMs/20);
		printf(".");
	}
	printf("\n");
	
	fn(roll, userGuess);
}

void ShowResult(int roll, int userGuess) {
	if ((roll % 2 == 0 && userGuess == 0) || (roll % 2 == 1 && userGuess == 1)) {
		printf("Correct! The dice roll was %d.(%s)\n", roll, (roll % 2 == 0) ? "even" : "odd");
	} else {
		printf("Incorrect. The dice roll was %d(%s).\n", roll, (roll % 2 == 0) ? "even" : "odd");
	}
}

int main() {

	srand(time(NULL));

	printf("please enter your guess(1:odd, 0:even): ");
	int guess;
	int result = scanf_s("%d", &guess);
	if (result != 1 || guess < 0 || guess > 1) {
		printf("Invalid input. Please enter 1 for odd or 0 for even.\n");
		return 1;
	}

	int dice = rand() % 6 + 1; 

	DelayReveal(ShowResult, 3000, dice, guess);


	return 0;
}