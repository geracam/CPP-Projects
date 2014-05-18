// my first program in C++
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;



int array(){
  vector<string> wordlist;
  string word;
  ifstream file("words.txt");
  while (getline>(file, word)){
    wordlist.push_back(word);
  }
  for (unsigned n=0; n<wordlist.size(); n++){
    cout<<wordlist.at(n)<<"";
  }

  return 0;


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