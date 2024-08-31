#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int leftWidth = 30;
  int rightWidth = 10;
  int num = 100;
  double price = 15;
  double discountFactor = .2;
  double subTotal;
  double discount;
  
  /*
    No endl because it puts the cursor on the next line when inputting;

    Example with endl: (_ is the cursor)
    Enter Quantity: 
    _

    Example without endl: (_ is the cursor)
    Enter Quantity: _

  */

  cout << "+--------------------------------------+" << endl;
  cout << "|                                      |" << endl;
  cout << "|    Super Discount Calculator 5000    |" << endl;
  // cout << "|          By Jedi McClimans           |" << endl;
  cout << "|                                      |" << endl;
  cout << "+--------------------------------------+" << endl << endl;
  cout << "Enter Quantity: ";
  cin >> num;
  cout << "Enter Price: ";
  cin >> price;
  cout << "Enter Discount Factor: ";
  cin >> discountFactor;
  cout << endl << "----------------------------------------" << endl;

  subTotal = num * price;
  discount = subTotal * discountFactor;

  cout << fixed << setprecision(0);
  cout << setw(leftWidth) << "Qty: " << setw(rightWidth) << num << endl;

  cout << fixed << setprecision(2);
  cout << setw(leftWidth) << "Unit Price: "                << setw(rightWidth) << price          << endl;
  cout << setw(leftWidth) << "Extended Price (Subtotal): " << setw(rightWidth) << subTotal       << endl;
  cout << setw(leftWidth) << "Discount Factor: "           << setw(rightWidth) << discountFactor << endl;
  cout << setw(leftWidth) << "Discount: "                  << setw(rightWidth) << discount       << endl;
  cout << "----------------------------------------" << endl;
  cout << setw(leftWidth) << "Discounted price: $"          << setw(rightWidth) << subTotal - discount << endl;
  cout << "----------------------------------------" << endl;
}
