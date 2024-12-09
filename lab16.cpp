#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "How many: ";
  cin >> n;
  cin.ignore(255, '\n');
  vector<string> vNames;
  string name;
  cout << "---- Vector ('Oh yeah! Comitting crimes with both direction and "
          "magnitude!')----"
       << endl;
  for (int x = 0; x < n; x++) {
    cout << "Enter name: ";
    getline(cin, name);
    vNames.push_back(name);
  }
  for (int x = 0; x < n; x++) {
    cout << vNames[x] << endl;
  }
  cout << "---- Dynamic memory ----" << endl;
  string *pNames;
  pNames = new string[n];
  for (int x = 0; x < n; x++) {
    cout << "Enter name: ";
    getline(cin, name);
    pNames[x] = name;
  }
  for (int x = 0; x < n; x++) {
    cout << pNames[x] << endl;
  }
  return 0;
}
