// my first program in C++
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;



void array(){
  size_t size=10;
  vector<int> words(size);

  for(int i=0; i<size; ++i){
    words[i]=i;
    cout <<"These are the words:"<< words[i]<<endl;
  }
}



int main()
{
  string input="";
  cout << "Welcome to my hangman game \n";
  cout <<"Please enter your name:\n";
  getline(cin, input);
  cout << "You entered: " <<input<<endl<<endl;
  array();


  
}