#include <iostream>
using namespace std;

int main(){
  int x;
  for (x = 10; x >= 0; x--)
    cout << x << endl;

  cout << "------" << endl;

  x = 10;
  while (x >= 0){
    cout << x << endl;
    x--;
  }

  cout << "------" << endl;

  x = 10;
  do {
    cout << x << endl;
    x--;
  }while (x >= 0);
  return 0;
}
