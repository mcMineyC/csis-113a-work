#include <iostream>
using namespace std;

int main() {
  int maze[10][13] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 0, 1, 0, 1, 0, 1, 0, 3, 0, 0, 0, 1},
                      {1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1},
                      {1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 4, 0, 1},
                      {1, 0, 1, 0, 0, 0, 4, 0, 1, 1, 1, 0, 1},
                      {1, 0, 1, 0, 1, 1, 1, 0, 1, 3, 3, 0, 1},
                      {1, 4, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1},
                      {1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1},
                      {1, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 3, 1},
                      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
  int points = 0;
  int numTreasure = 0;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 13; y++) {
      cout << maze[x][y] << " ";
      if (maze[x][y] == 3) {
        points++;
        numTreasure++;
      } else if (maze[x][y] == 4) {
        points += 2;
      }
    }
    cout << endl;
  }
  cout << endl << "Points: " << points << endl;
  cout << "\t1 point treasure: " << numTreasure << endl;
  cout << "\t2 point treasure: " << (points - numTreasure) / 2 << endl;
  return 0;
}
