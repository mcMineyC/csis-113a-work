#include <iostream>
using namespace std;

int main(){
  int income = 140000;
  int score = 600;
  bool isFirstTime = false;
  if(
    (income >= 120000 && score >= 580 && !isFirstTime) ||
    (income >= 90000 && score >= 630 && !isFirstTime) ||
    (income >= 60000 && score >= 720 && !isFirstTime)
  ){
    cout << "Low Interest - 10% Down" << endl;
  } else if (
    income >= 48000 && score >= 630 && !isFirstTime
  ){
    cout << "Medium Interest - 20% Down" << endl;
  }else if(
    (income >= 36000 && score >= 720 && isFirstTime) ||
    (income >= 60000 && score >= 630 && isFirstTime)
  ){
    cout << "High Interest - 5% Down" << endl;
  }else{
    cout << "Sorry, you don't qualify for any loans" << endl;
  }
  return 0;
}
