#include <iostream>
using namespace std;

int main(){
  int feet;
  int inches;
  cout << "Enter number of feet: ";
  cin >> feet;
  inches = feet * 12;
  cout << "The number of inches in " << feet << " feet is " << inches << endl;

  return 0;
}
