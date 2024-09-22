#include <iostream>
using namespace std;

int main(){
  int grade;
  cout << "Enter your grade: ";
  cin >> grade;
  
  cout << "You " << (grade >= 90 ? "passed!" : "failed :(") << endl;

  return 0;
}
