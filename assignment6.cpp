#include <iostream>
#include <string>
using namespace std;

int main(){
  string name;
  int number, guess;
  int numGuesses = 0;
  cout << "Please enter your name: ";
  getline(cin, name);
  cout << "Hi " << name << ", I'm thinking of a number between 1 and 100." << endl;

  srand(time(0));
  number = rand() % 100 + 1;
  do{
    cout << "Enter Guess: ";
    cin >> guess;
    if(guess > number)
      cout << "Too High" << endl;
    else if(guess < number)
      cout << "Too Low" << endl;
    cout << endl;
    numGuesses++;
  }while(number != guess);
  cout << "Congratulations " << name << "! You guessed the secret number in " << numGuesses << " tries." << endl;
  if(numGuesses == 1)
    cout << "Hmmm.... just luck or did you peek at the memory?" << endl;
  else if(numGuesses <= 3)
    cout << "Nice job! If I added anti-cheat, you'd trigger it for sure ;)" << endl;
  else if(numGuesses <= 8)
    cout << "You did okay. You were better than 16% of people who played" << endl;
  else
    cout << "... How did you do so badly?" << endl;
  return 0;
}
