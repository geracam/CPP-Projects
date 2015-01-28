// gcd.cpp: Gerardo Camarena Gomez
// Description: Find the gcd of two numbers without recursion

// Euclid's Algorithm:
// Input: Two positive ints a and b.
// Output: The greatest common divisor, g, of a and b. 
// 1. If a<b, exchange a and b. 
// 2. Divide a by b to get remainder, r. If r=0 gcd is b.
// 3. Replace a by b and replace b by r. Do step 2 again. 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int gcd_function( int a, int b){
	int swap;
	while (b !=0 ){
		swap = a % b;		
		a = b;
		b = swap;
	}
	return (a);
}

int main(){
	int num1;
	int num2;

	cout << "Enter the two numbers you'd like to find the gcd of";

	if (!(cin >> num1 >> num2)){
		cout << "Enter only numbers" << endl;
	}
	else {
		cout << "The gcd is:" << gcd_function(num1, num2) << endl;
	}
	return 0;
}