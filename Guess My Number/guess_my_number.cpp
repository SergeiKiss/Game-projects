#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
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

  cout << "\nThe game starts!\n";

  if (chosenGameType == 1) {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % maxNumber + 1;
    int guessNumber;
    cout << "You need to name the hidden number. The amount of attempts is not limited.\n\n";
    do {
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
    } while (guessNumber != secretNumber);
  }
  else if (chosenGameType == 2) {
    char isCorrectAnswer;
    int rangeMax = maxNumber;
    int rangeMin = 0;
    int currentAIGuess = maxNumber / 2;

    cout << "You need to think of a number and answer to AI if it is low or high.\n\n";
    cout << "Is this your number: " << currentAIGuess << "?";
    cout << " Write 'y' if it is :).\n"
      << "If it's too high, write 'h', "
      << "else write 'l'.\n";

    cout << "Type here: ";
    cin >> isCorrectAnswer;
    ++tries;
    do {
      if (isCorrectAnswer == 'h') {
        ++tries;
        rangeMax = currentAIGuess;
        currentAIGuess = rangeMax - (rangeMax - rangeMin) / 2;
        cout << "Is this your number: " << currentAIGuess << "?\n"
        << "Type here: ";
        cin >> isCorrectAnswer;
      }
      else if (isCorrectAnswer == 'l') {
        ++tries;
        rangeMin = currentAIGuess;
        currentAIGuess = rangeMax - (rangeMax - rangeMin) / 2;
        cout << "Is this your number: " << currentAIGuess << "?\n"
             << "Type here: ";
        cin >> isCorrectAnswer;
      }
    } while (isCorrectAnswer != 'y');
    cout << "Congratulations! The game is over with " << tries << " tries.\n";
  }
  return 0;
};
