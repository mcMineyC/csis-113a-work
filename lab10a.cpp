#include <iostream>
using namespace std;

void countUp();
void countUp(int stop);
void countUp(int start, int stop);
void countUp(int start, int stop, int step);

int main() {
  countUp();
  countUp(100);
  countUp(10, 20);
  countUp(50, 100, 5);
  return 0;
}

void countUp() {
  countUp(0, 10, 1);
}
void countUp(int stop) {
  countUp(0, stop, 1);
}
void countUp(int start, int stop) {
  countUp(start, stop, 1);
}
void countUp(int start, int stop, int step) {
  for (int i = start; i <= stop; i += step) {
    cout << i << endl;
  }
}
