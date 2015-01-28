// helloworld.cpp : Gerardo Camarena Gomez
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  for (int line = 0; line < 6; line++){
  	for (int column = 0; column < 4; column++)
  		cout << left <<  setw(17) << "Hello World!";  	
  	cout << endl;
  }
  return 0;
}