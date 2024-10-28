<<<<<<< HEAD
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

double fToC(double f);
double cToF(double c);
double fToK(double f);
double cToK(double c);
char getMenuChoice();

int main() {
  char choice;
  double in;
  do {
    choice = getMenuChoice();
    switch (choice) {
    case 'A':
      cout << "Enter fahrenheit to convert: " << endl;
      cin >> in;
      cout << "Celsius is: " << fToC(in) << endl;
      break;
    case 'B':
      cout << "Enter celsius to convert: " << endl;
      cin >> in;
      cout << "Fahrenheit is: " << cToF(in) << endl;
      break;
    case 'C':
      cout << "Enter fahrenheit to convert: " << endl;
      cin >> in;
      cout << "Kelvin is: " << fToK(in) << endl;
      break;
    case 'D':
      cout << "Enter celsius to convert: " << endl;
      cin >> in;
      cout << "Kelvin is: " << cToK(in) << endl;
      break;
    }
  } while (choice != 'Q');
  cout << "Goodbye" << endl;
  return 0;
}

char getMenuChoice() {
  char choice;
  cout << endl;
  cout << "Main menu" << endl;
  cout << "A - Fahrenheit to Celsius" << endl;
  cout << "B - Celsius to Fahrenheit" << endl;
  cout << "C - Fahrenheit to Kelvin" << endl;
  cout << "D - Celsius to Kelvin" << endl;
  cout << "Q - Quit" << endl;
  cout << "Enter a menu choice: ";
  cin >> choice;
  cout << endl;
  choice = toupper(choice);
  return choice;
}
double fToC(double f) { return (f - 32.0) * (double)(5 / 9); }
double cToF(double c) { return c * (double)(9 / 5) + 32.0; }
double fToK(double f) { return (f - 32.0) * (double)(5 / 9) - 273.15; }
double cToK(double c) { return c - 273.15; }
=======
#include <iostream>
using namespace std;

int main() {
  return 0;
}
>>>>>>> refs/remotes/origin/main
