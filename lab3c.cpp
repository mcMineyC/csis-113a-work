#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int numRows, numCols;
  char myChar;

  cout << "Enter the number of rows: ";
  cin >> numRows;
  cout << "Enter the number of columns: ";
  cin >> numCols;
  // Just making sure it's actually one character
  cout << "Enter a character to make a sqare with: ";
  cin >> setw(1) >> myChar;

  for(int r = 1; r <= 5; r++){
    for(int c = 1; c <= 5; c++)
      cout << myChar << " ";
    cout << endl;
  }
  return 0;
}
