#include <iostream>
using namespace std;

void CountUp(int start, int stop, int step);

int main() {
  CountUp(1, 10, 1);
  return 0;
}

void CountUp(int start, int stop, int step) {
  for (int x = start; x <= stop; x += step)
    cout << x << endl;
}
