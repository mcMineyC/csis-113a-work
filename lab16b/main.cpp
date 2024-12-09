#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Stack<int> scores;
  scores.push(100);
  scores.push(105);
  scores.push(95);
  cout << scores.peek() << endl;
  scores.pop();
  scores.pop();
  cout << scores.peek() << endl;
  cout << endl;
  Stack<double> prices;
  prices.push(9.99);
  prices.push(10.98);
  prices.push(5.67);
  cout << prices.peek() << endl;
  prices.pop();
  prices.pop();
  cout << prices.peek() << endl;
  Stack<string> names;
  names.push("Bill Gates");
  names.push("Tim Berners-Lee");
  names.push("Steve Jobs");
  cout << names.peek() << endl;
  names.pop();
  names.pop();
  cout << names.peek() << endl;
  return 0;
}
