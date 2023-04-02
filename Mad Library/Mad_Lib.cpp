#include <iostream>
#include <string>
using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main() {
  cout << "Welcome to Mad Lib.\n\n"
       << "Answer the following questions to help create a new story.\n";
  string name = askText("please enter a name: ");
  string noun = askText("please, enter a plural noun: ");
  int number = askNumber("Please enter a number: ");
  string bodyPart = askText("Please enter a body part");
  string verb = askText("Please enter a verb: ");
  tellStory(name, noun, number, bodyPart, verb);
}

string askText(string prompt) {
  string text;
  cout << prompt;
  cin >> text;
  return text;
}

int askNumber(string prompt) {
  int number;
  cout << prompt;
  cin >> number;
  return number;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb) {
  cout << "\nHere's your story:\n"
       << "The famous explorer " << name
       << " had nearly given up a life-long quest to find\n"
       << "The Lost City of " << noun
       << " when one day, the " << noun
       << " found the explorer.\n";
  cout << "Surrounded by " << number << " " << noun
       << ", a tear came to " << name << "'s " << bodyPart << ".\n";
  cout << "After all this time, the quest was finally over. "
       << "And then, the " << noun
       << "\npromptly devoured " << name << ". ";
  cout << "The moral of the story? Be careful what you " << verb << " for.";
}