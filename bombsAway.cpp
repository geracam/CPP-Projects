// bombsAway.cpp: Gerardo Camarena Gomez
// Description: A game that asks user input for angle of cannon to hit a target that is randomly made.

#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

const double Velocity = 200.0; // V-initial in ft/s
const double Gravity = 32.0; // Gravitational acceleration in ft/s2
const int maxShots = 10; // Max tries the user gets

void showDirections(){
	cout << "Welcome to Artillery. You are in the middle of a war and being charged by thousands of enemies. You have one cannon, which you can shoot at any angle. You only have 10 cannonballs for this target.. Let us begin..."<< endl;
}

int getTargetDistance(){
	int targetDistance;
	// Initialize random seed
	srand (time(0));
	// Range span + Initial Vale
	targetDistance = rand() % 100 + 100;
	cout << "Target is" << targetDistance << "ft away" << endl;
	return targetDistance;
}

int getShotDistance(double angle){
	double airTime;
	int shotDistance;
	airTime = (2.0 * Velocity * sin(angle)) / Gravity;
	shotDistance = round((Velocity * cos(angle)) * airTime);
	return shotDistance;
	}

int getAngle(){
	double angle;
	int shotDistance;
	cout << "Enter angle";
	if (!(cin >> angle)) {
		return 0;
	}
	angle = angle * (3.14/180);
	shotDistance = getShotDistance(angle);
	return shotDistance;
}

int fire(int targetsHit) {
	int targetDistance;
	int shotsLeft;
	int targetHit;
	int shotDistance;

	targetDistance = getTargetDistance();
	shotsLeft = maxShots;
	targetHit = 0;

	do {
		shotDistance = getAngle();
		// Input error
		if (shotDistance == 0){
			cout << "Angle must be a number" << endl;
			cin.clear();
			cin.ignore(100000, '\n');
			continue;
		}
		// Hit target
		if (abs(targetDistance - shotDistance) <= 1) {
			targetHit = 1;
			shotsLeft--;
			targetsHit++;
			cout << "Success!" << endl;
			cout << "Shots taken:" << abs(shotsLeft - maxShots) << endl;
			cout << "Targets hit:" << targetsHit << endl;
		}
		// Missed target
		else {
			cout << "You missed!" << endl;
			shotsLeft--;
			if (targetDistance > shotDistance) {
				cout << "You under shot by:" << abs(targetDistance - shotDistance) << endl;
			}
			else {
				cout << "You over shot by:" << abs(targetDistance - shotDistance) << endl;
			}
		}
	} while ((targetHit == 0) && (shotsLeft > 0));
	// Ran out of tries
	if (shotsLeft == 0) {
		cout << "You ran out of tries" << endl;	
	}
	return targetsHit;
}

int main(){
	showDirections();
	int targetsHit;
	char again;
	targetsHit = 0;
	do {
		targetsHit = fire(targetsHit);
		cout << "Would you like to play again? Y/N" << endl;
		cin >> again;
	} while (again != 'N');
	cout << "Thanks for playing. Targets hit:" << targetsHit << endl;
}

