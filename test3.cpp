#include <iostream>
using namespace std;
struct FUEL {
  string fuelGrade;
  int gallons;
  double price;
};

int main() {
  FUEL tank1;
  tank1.fuelGrade = "Plus";
  tank1.gallons = 42;
  tank1.price = 268.38;
  cout << tank1.gallons << " of gas costs ~$" << tank1.price
       << " in Southern California" << endl;
  return 0;
}
