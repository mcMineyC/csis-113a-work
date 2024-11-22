#include <iostream>
#include <string>
using namespace std;
class Explorer {
private:
  string name;
  int score;
  int numGold;
  int numSilver;

public:
  Explorer();
  Explorer(string n);
  Explorer(string n, int s, int nG, int nS);
  int getScore();
  void findGold();
  void findSilver();
  void robbed();
  void robbed(int n);
  void showInfo();
};
Explorer::Explorer()
    : name("Something with your name in it, said Jedi"), score(1000),
      numGold(100), numSilver(50) {}
Explorer::Explorer(string n, int s, int nG, int nS)
    : name(n), score(s), numGold(nG), numSilver(nS) {}
Explorer::Explorer(string n)
    : name(n), score(1000), numGold(100), numSilver(50) {}
int Explorer::getScore() { return score; }
void Explorer::findGold() {
  score += 100; // Optimized using +=

  numGold++;
}
void Explorer::findSilver() {
  score += 50; // Optimized using +=
  numSilver++;
}
void Explorer::robbed() {
  score = 0;
  numGold = 0;
  numSilver = 0;
}
void Explorer::robbed(int n) { score -= n; } // Optimized using -=
void Explorer::showInfo() {
  cout << "STATS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
  cout << "Name: " << name << endl;
  cout << "Score: " << score << endl;
  cout << "Gold Coins: " << numGold << endl;
  cout << "Silver Coins: " << numSilver << endl << endl;
}

int main() {
  Explorer explorers[3] = {
      Explorer(),
      Explorer("Dora"), // I pologize if this is immature but it's funny
      Explorer("Jedi", 1000, 10, 0),
  };
  for (int x = 0; x < 3; x++) {
    explorers[x].showInfo();
  }
  cout << endl;
  for (int x = 0; x < 3; x++) {
    explorers[x].findGold();
    explorers[x].findSilver();
    explorers[x].showInfo();
  }
  cout << endl;
  for (int x = 0; x < 3; x++) {
    explorers[x].robbed();
    explorers[x].showInfo();
  }
  cout << endl;
  for (int x = 0; x < 3; x++) {
    explorers[x].robbed(10);
    explorers[x].showInfo();
  }
  return 0;
}
