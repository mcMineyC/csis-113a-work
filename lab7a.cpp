#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  char opCode;
  do {
    cout << "Enter Math Operator (+, -, *, /, %) or 'Q' to quit: ";
    cin >> opCode;
    opCode = toupper(opCode); // To handle lowercase Q
    if(opCode == 'Q') break;
    cout << "Enter first operand: ";
    cin >> num1;
    cout << "Enter second operand: ";
    cin >> num2;
    switch(opCode){
      case '+':
        cout << num1 << " plus " << num2 << " equals " << num1 + num2 << endl;
        break;
      case '-':
        cout << num1 << " minus " << num2 << " equals " << num1 - num2 << endl;
        break;
      case '*':
        cout << num1 << " times " << num2 << " equals " << num1 * num2 << endl;
        break;
      case '/':
        cout << num1 << " divided by " << num2 << " equals " << num1 / num2 << endl;
        break;
      case '%':
        cout << num1 << " modulus " << num2 << " equals " << num1 % num2 << endl;
        break;
      default:
        cout << "Not a valid operator" << endl;
    }
  } while(opCode != 'Q');
  cout << "Goodbye" << endl;
  return 0;
}
