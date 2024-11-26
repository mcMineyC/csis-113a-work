#include <string>
using std::string;
#pragma once
class BankAccount {
private:
  string customer_name;
  int account_number;
  double account_balance;

public:
  BankAccount();
  BankAccount(string name, int account, double balance);
  double getBalance();
  bool deposit(double amount);
  bool withdraw(double amount);
  bool canWithdraw(); // Added to fix error when account balance is 0 and
                      // couldn't check it was 0 resulting in an infinite loop
  void showAccountInfo();
};
