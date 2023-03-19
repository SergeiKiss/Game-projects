#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#include <ctime>
#include <random>
#include <cctype>

using namespace std;

int main() {
  const int MAX_WRONG = 8;
  vector<string>words;
  words.push_back( "GUESS");
  words.push_back("HANGMAN");
  words.push_back("DIFFICULT");
  random_device rng;
  mt19937 urng(rng());
  shuffle(words.begin(), words.end(), urng);
  const string THE_WORD = words[0];
  int wrong = 0;
  string soFar(THE_WORD.size(), '-');
  string used = "";
  cout << "Welcome to Hangman. Good luck!\n";
  while ((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
    cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
    cout << "\nYou've used the following letters:\n" << used << endl;
    cout << "\nSo far. thr word is:\n" << soFar << endl;
    //
    //
    //
    //
    //
    if (wrong == MAX_WRONG) {
      cout << "\nYou've een hanged!";
    }
    else {
      cout << "\nYou guessed it!";
    }
    cout << "\nThe word was " << THE_WORD << endl;
    return 0;
  }
}