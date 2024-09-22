#include <iostream>
using namespace std;

int main(){
  int grade;
  cout << "Enter your grade: ";
  cin >> grade;

  if(grade >= 90)
    cout << "You passed!" << endl;
  else
    cout << "You failed :(" << endl;

  cout << "--------" << endl;

  if(grade < 90){
    cout << "You failed :(" << endl;
  }else{
    cout << "You passed!" << endl;
  }

  cout << "--------" << endl;

  if(grade > 89)
    cout << "You passed!" << endl;
  else
    cout << "You failed :(" << endl;

  return 0;
}
