#include "BankAccount.h"
#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setw;
BankAccount::BankAccount() {
  customer_name = "John Doe";
  account_number = 12345678;
  account_balance = 100.00;
}
BankAccount::BankAccount(string name, int account, double balance)
    : customer_name(name), account_number(account), account_balance(balance) {}
double BankAccount::getBalance() { return account_balance; }
bool BankAccount::deposit(double amount) {
  if (amount > 0 && amount <= 10000) {
    account_balance += amount;
    return true;
  } else {
    return false;
  }
}
bool BankAccount::withdraw(double amount) {
  if (amount > 0 && amount <= 800 && amount <= account_balance) {
    account_balance -= amount;
    return true;
  } else {
    return false;
  }
}
bool BankAccount::canWithdraw() { return account_balance > 0; }
void BankAccount::showAccountInfo() {
  cout << "Banking Infoformation for " << setw(8) << account_number
       << " -----------" << endl;
  if (account_balance < 200)
    cout << "*** LOW BALANCE ALERT ***" << endl;
  cout << "\tCustomer Name: " << customer_name << endl;
  cout << "\tAccount Balance: $" << account_balance << endl;
  cout << "--------------------------------" << endl;
}
