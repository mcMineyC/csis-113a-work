#include <iostream>
using namespace std;

int main(){
  int c1 = 80;
  int c2 = 0;
  
  int c3 = 80;
  int c4 = 0;

  if(((c1 >= 80) || (c2 >= 80)) && ((c3 >= 80) || (c4 >= 80)))
    cout << "Go For Launch!" << endl;
  else
    cout << "Abort!" << endl;

  return 0;
}
