#include <iostream>
using namespace std;
double grossPay(int hours, double rate);
int main() {
  cout << "Gross Pay is " << grossPay(40, 12.50) << endl; // should print 580
  cout << "Gross Pay is " << grossPay(43, 12.50) << endl; // should print 537.5
}
double grossPay(int hours, double rate) { return hours * rate; }
