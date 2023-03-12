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
    int currentAIGuess = maxNumber / 2;
    cout << "Is this your number: " << currentAIGuess << "?";
    cout << " Write 'y' if it is :).\n"
      << "if it's too high, write 'h', "
      << "else write 'l'.\n";
    cout << "Type here: ";
    cin >> isCorrectAnswer;
    do {
      if (isCorrectAnswer == 'h') {
        currentAIGuess = currentAIGuess - currentAIGuess / 2;
        cout << "Is this your number?" << currentAIGuess;
        cout << "\nType here: ";
        cin >> isCorrectAnswer;
      }
      else if (isCorrectAnswer == 'l') {
        currentAIGuess = currentAIGuess + currentAIGuess / 2;
        cout << "Is this your number?" << currentAIGuess;
        cout << "\nType here: ";
        cin >> isCorrectAnswer;
      }
    } while (isCorrectAnswer != 'y');
  }
  return 0;
};
