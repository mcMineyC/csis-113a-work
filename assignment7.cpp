#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int accountNumber, balance = 0, amount;
  string name;
  char choice;
  bool accountValid = true;
  bool valid = true;
  cout << "Enter your name: ";
  getline(cin, name);
  do {
    if (!accountValid)
      cout << "Invalid account number. Try again: ";
    else
      cout << "Enter your account number: ";
    cin >> accountNumber;
    if (accountNumber >= 10000000 && accountNumber <= 99999999)
      accountValid = true;
    else
      accountValid = false;
  } while (!accountValid);

  do {
    cout << endl;
    cout << "Main menu" << endl;
    cout << "A - Deposit" << endl;
    cout << "B - Withdrawal" << endl;
    cout << "C - Show Balance" << endl;
    cout << "Q - Quit" << endl;
    cout << "Enter a menu choice: ";
    cin >> choice;
    cout << endl;
    choice = toupper(choice);
    switch (choice) {
    case 'A':
      valid = true;
      do {
        if (!valid)
          cout << "Invalid amount. Must be greater than 0 and less than or "
                  "equal to $10,000. Try again: ";
        else
          cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0 && amount <= 10000)
          valid = true;
        else
          valid = false;
      } while (!valid);
      balance += amount;
      cout << "Deposited $" << amount << endl;
      break;
    case 'B':
      valid = true;
      do {
        if (!valid)
          cout << "Invalid amount. Must be greater than 0, less than or equal "
                  "to $800, and less than or equal to your balance ($"
               << balance << "). Try again: ";
        else
          cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= 800 && amount <= balance)
          valid = true;
        else
          valid = false;
      } while (!valid);
      balance -= amount;
      cout << "Withdrew $" << amount << endl;
      break;
    case 'C':
      if (balance < 200)
        cout << "*** LOW BALANCE ALERT ***" << endl;
      cout << "     Name: " << name << endl;
      cout << "Account #: " << accountNumber << endl;
      cout << "  Balance: $" << balance << endl;
      break;
    }
  } while (choice != 'Q');
  cout << "Goodbye" << endl;
  return 0;
}
