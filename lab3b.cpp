#include <iostream>
using namespace std;

int main(){
  srand(time(0));
  int guess;
  int numGuesses = 0;
  int secret = rand() % 20 + 1;

  do{
    cout << "Enter guess: ";
    cin >> guess;
    numGuesses++;
  } while(guess != secret);

  cout << "You got it in " << numGuesses << " guesse(s)" << endl;

  return 0;
}
