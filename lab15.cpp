#include <iostream>
using namespace std;

int main() {
  double num1 = 5.75;
  double num2 = 12.33;
  double *pnum1 = &num1;
  double *pnum2 = &num2;
  cout << "The sum of " << *pnum1 << " and " << *pnum2 << " is "
       << (*pnum1) + (*pnum2) << endl;
  return 0;
}
