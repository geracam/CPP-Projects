// Guessing_Game.pp : Gerardo Camarena Gomez
// A guessing game that takes user input and guides user to correct answer.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	int secret_number;
	int guess;

	// We use time to initialize the random seed.
	srand (time(0));

	// Rand # takes modulo of returned value + range
	secret_number = rand() % 100 +1;

	cout << "Enter a guess";

	do{
		if (!(cin >> guess)) {
			cout << "Numbers Only" << endl;
			cin.clear();
			cin.ignore(100000000, '\n');
		}
		else {
			if (guess < secret_number){
				cout << "Guess Higher" << endl;

			}
			else if (guess > secret_number){
				cout << "Guess Lower" << endl;
			}

	} }while (secret_number != guess);
	cout << "good job, random #:" << secret_number << endl;
	return 0;
}