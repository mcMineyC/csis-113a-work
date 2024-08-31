#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int start, stop, step = 0;
  int colWidth = 10;
  cout << "Enter Start Fahrenheit: ";
  cin >> start;
  cout << "Enter Stop Fahrenheit: ";
  cin >> stop;
  cout << "Enter Step (in Fahrenheit): ";
  cin >> step;
  cout << fixed << setprecision(1);
  // Header
  cout << setw(colWidth) << "Fahrenheit" << setw(colWidth) << "Celsius" << endl;
  for(int z = 0; z < (colWidth*2)+1; z++)
    cout << "-";
  cout << endl;
  // Table
  for(int i = start; i <= stop; i += step){
    double celsius = 5*(i-32)/9.0;
    cout << "|" << setw(colWidth-1) << i << "|" << setw(colWidth-1) << celsius << "|" << endl;
  }
  // Footer
  for(int z = 0; z < (colWidth*2)+1; z++)
    cout << "-";
  cout << endl;
  
  return 0;
}
