#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  char isCorrectAnswer;
  int maxNumber;
  int tries = 0;
  int chosenGameType;

  cout << "\tWelcome to Guess My Number\n\n";
  cout << "\nLet set up your game!\n";
  cout << "Choose a game type:\n"
          << "You guess - 1\n"
          << "AI guess - 2\n";
  cout << "Type here: ";
  cin >> chosenGameType;

  cout << "Choose a max number: ";
  cin >> maxNumber;

  if (chosenGameType == 1) {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % maxNumber + 1;
    int guessNumber;
    do {
        cout << "\nThe game starts!\n";
        cout << "You need to name the hidden number. The amount of attempts is not limited.\n";
        cout << "Enter a guess: ";
        cin >> guessNumber;
        ++tries;

        if (guessNumber > secretNumber) {
          cout << "Too high!\n\n";
        } else if (guessNumber < secretNumber) {
          cout << "Too low!\n\n";
        } else {
          cout << "That's it! You got it in " << tries << " tries!\n";
        }
        return 0;
    } while (guessNumber != secretNumber);
  } else if (chosenGameType == 2) {
    int firstTry = maxNumber / 2;
    cout << "Is this your number?" << firstTry;
    cout << "Write 'yes' if it is :).\n"
    << "if it's too high write 'too high'\n"
    << "else write 'too low'.";
    cin >> isCorrectAnswer;
    do {

    } while (isCorrectAnswer != 'yes');
  }
};