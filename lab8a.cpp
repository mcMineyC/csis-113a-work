#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  double change;
  cout << "\tChange finder: $";
  cin >> change;
  int cents_remaining = change * 100;
  int dollars = cents_remaining / 100;
  cents_remaining %= 100;
  int quarters = cents_remaining / 25;
  cents_remaining %= 25;
  int dimes = cents_remaining / 10;
  cents_remaining %= 10;
  int nickels = cents_remaining / 5;
  cents_remaining %= 5;
  int pennies = cents_remaining;

  int dollars_remaining = dollars;
  int twenties = dollars_remaining / 20;
  dollars_remaining %= 20;
  int tens = dollars_remaining / 10;
  dollars_remaining %= 10;
  int fives = dollars_remaining / 5;
  dollars_remaining %= 5;
  int ones = dollars_remaining;

  string coins_str = "$" + (to_string(change - dollars).substr(0, 4));

  cout << endl;
  cout << "+";
  for(int x = 0; x < 15+3+3+12+5+2; x++) cout << "-";
  cout << "+" << endl;
  cout << "| " << setw(15) << "Dollar bills: $" << setw(3) << dollars  << "  |" << setw(12) << "Coins: "    << setw(5) << coins_str << " |" << endl;
  cout << "| " << setw(15) << "Twenties: "      << setw(3) << twenties << "  |" << setw(12) << "Quarters: " << setw(5) << quarters  << " |" << endl;
  cout << "| " << setw(15) << "Tens: "          << setw(3) << tens     << "  |" << setw(12) << "Dimes: "    << setw(5) << dimes     << " |" << endl;
  cout << "| " << setw(15) << "Fives: "         << setw(3) << fives    << "  |" << setw(12) << "Nickels: "  << setw(5) << nickels   << " |" << endl;
  cout << "| " << setw(15) << "Ones: "          << setw(3) << ones     << "  |" << setw(12) << "Pennies: "  << setw(5) << pennies   << " |" << endl;
  cout << "+";
  for(int x = 0; x < 15+3+3+12+5+2; x++) cout << "-";
  cout << "+" << endl << endl;
  return 0;
}
