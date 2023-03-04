#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int maxNumber;
        int tries = 0;
        int guessNumber;
	int typeNumber;
        cout << "\tWelcome to Guess My Number\n\n";
	int choiseNumber;
	cout << "Choose a game type\nYou guess - 1\nAI guess - 2 ";
	cin >> choiseNumber;
	cout << "Choose a max number: ";
	cin >> maxNumber;
if(choiseNumber == 1) {
	srand(static_cast<unsigned int>(time(0)));
        int secretNumber = rand() % maxNumber + 1;
		do {
    	cout << "Enter a guess: ";
    	cin >> guessNumber;
    	++tries;
    	if (guessNumber > secretNumber) {
      		cout << "Too high!\n\n";
    	}
	 else if (guessNumber < secretNumber) {
      		cout << "Too low!\n\n";
 	}
	 else {
		cout << "That's it! You got it in " << tries << " tries!\n";
  }
	 while (guessNumber != secretNumber);
		return 0;
}
else if(choiseNumber == 2) {
	do {
		cout << "Type a number from 1 to " << maxNumber;
		cin >> typeNumber;
		++tries;
		cout << "Current number " << guessNumber;
		if(guessNumber < typeNumber) {
			guessNumber = maxNumber - guessNumber;
}
}
}
else {
		cout << "Choosen incorrect number";
}
return 0;
}

