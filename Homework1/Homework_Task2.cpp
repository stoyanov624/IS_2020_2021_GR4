
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int main()
{
	int number = 0;

	srand (time(NULL));
	number = rand() % 1000 + 1;

	int guess = 0;
	int attempts = 1;
	
	std::cout << "Guess: ";
	cin >> guess;

	while (guess != number) {

		if (guess < number) {
			cout << "Try with a bigger number!" << endl;
		}
		else {
			cout << "Try with a smaller number!" << endl;
		}

		std::cout << "Guess: ";
		cin >> guess;
		attempts++;
	}

	if (attempts == 1) {
		cout << "Chackpot! You are really good at this!" << endl;
	}
	else {	
		cout << "Chackpot!, it took you " << attempts << " tries!" << endl;
	}
	
	
}

