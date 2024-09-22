#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
  int numProblems, guesses = 0;
  bool goAgain;
  srand(time(0));
  do{
    guesses = 0;
    cout << "How many multiplication problems? ";
    cin >> numProblems;
    cout << "Instructions: when the problem is displayed, enter your answer and hit enter." << endl;
    for(int i = 0; i < numProblems; i++){
      int answer, guess;
      int localNumGuesses = 0;
      int numOne = rand() % 12 + 1;
      int numTwo = rand() % 12 + 1;
      answer = numOne * numTwo;
      do{
        cout << numOne << " X " << numTwo << " = ";
        cin >> guess;
        localNumGuesses++;
      }while(guess != answer);
      cout <<  "Congratulations!  You got it in " << localNumGuesses << " guess(es)!  What a wizard!" << endl;
      guesses += localNumGuesses;
    }
    cout << "Nice job!  You solved " << numProblems << " in " << guesses << " guesses!" << endl;
    cout << fixed << setprecision(0);
    cout << "(You had an accuracy of " << numProblems * 100 / guesses << "%)" << endl;
    cout << endl;
    cout << "Would you like to go again? (Y/N) ";
    char c;
    cin >> c;
    while(toupper(c) != 'Y' && toupper(c) != 'N'){
      cout << "Please enter Y or N: ";
      cin >> c;
    };
    goAgain = (toupper(c) == 'Y');
  } while(goAgain);
  return 0;
}
