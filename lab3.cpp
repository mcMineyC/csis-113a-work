#include <iostream>
using namespace std;

int main(){
  int maxValue;
  int minValue;
  int incValue;
  cout << "Max value ";
  cin >> maxValue;

  cout << "Min value ";
  cin >> minValue;

  cout << "Increment value ";
  cin >> incValue;

  for(int x = minValue; x<= maxValue; x += incValue) {
    cout << x << endl;
  }
  return 0;
}
