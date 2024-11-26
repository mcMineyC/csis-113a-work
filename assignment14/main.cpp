/*#include "BankAccount.cpp"*/
#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  char choice;
  string customer_name;
  int account_number;

  bool account_number_valid = true;
  cout << "Please enter your name: ";
  getline(cin, customer_name);
  do {
    if (!account_number_valid)
      cout << "Invalid account number. Try again: ";
    else
      cout << "Enter your account number: ";
    cin >> account_number;
    if (account_number >= 10000000 && account_number <= 99999999)
      account_number_valid = true;
    else
      account_number_valid = false;
  } while (!account_number_valid);

  BankAccount account(customer_name, account_number, 0.0);

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
    case 'A': { // added curly braces based on this answer because I use
                // case-specifc descriptive variables:
                // https://stackoverflow.com/questions/23599708/how-do-i-resolve-this-error-jump-to-case-label-crosses-initialization/23599822
      int deposit_amount;
      bool deposit_valid = true;
      do {
        if (!deposit_valid)
          cout << "Invalid amount. Must be greater than 0 and less than or "
               << "equal to $10,000. Try again: ";
        else
          cout << "Enter amount to deposit: ";
        cin >> deposit_amount;
        deposit_valid = account.deposit(deposit_amount);
      } while (!deposit_valid);
      cout << "Deposited $" << deposit_amount << endl;
      break;
    }
    case 'B': {
      if (!account.canWithdraw()) {
        cout << "You cannot withdraw money.  Your account balance is $0"
             << endl;
        break;
      }
      int withdraw_amount;
      bool withdraw_valid = true;
      do {
        if (!withdraw_valid)
          cout
              << "Invalid amount. Must be greater than 0, less than or equal "
              << "to $800, and less than or equal to your balance. Try again: ";
        else
          cout << "Enter amount to withdraw: ";
        cin >> withdraw_amount;
        withdraw_valid = account.withdraw(withdraw_amount);
      } while (!withdraw_valid);
      cout << "Withdrew $" << withdraw_amount << endl;
      break;
    }
    case 'C': {
      account.showAccountInfo();
      break;
    }
    }
  } while (choice != 'Q');
  cout << "Goodbye" << endl;
  return 0;
}
