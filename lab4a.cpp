#include <iostream>
#include <string>
using namespace std;

int main(){
  string fullname = "Jedidiah (Jedi) McClimans";
  cout << fullname.substr(0, 8) << " " << fullname.substr(16) << endl;
  return 0;
}
