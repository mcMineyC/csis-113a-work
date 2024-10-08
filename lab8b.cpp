#include <iostream>

using namespace std;

int main() {
  int c;
  bool flag1 = false;
  bool flag2 = false;
  int player1, player2;

  while (flag1 == false || flag2 == false) {
    c = cin.get();

    if (c == 49 || c == 50 || c == 51) {
      flag1 = true;
      player1 = c;
    }
    if (c == 44 || c == 46 || c == 47) {
      flag2 = true;
      player2 = c;
    }
  }

  cout << player1 << "  " << player2 << endl;
  int winner = 0;
       if (player1 == 49 && player2 == 47) winner = 1; //rock crushes scissors
  else if (player1 == 50 && player2 == 44) winner = 1; //paper wraps rock
  else if (player1 == 51 && player2 == 46) winner = 1; //scissors cut paper
  else if (player1 == 49 && player2 == 46) winner = 2; //paper wraps rock
  else if (player1 == 50 && player2 == 47) winner = 2; //scissors cut paper
  else if (player1 == 51 && player2 == 44) winner = 2; //rock crushes scissors
  else winner = 3;                                     //Ties

  if (winner != 3) cout << "Player " << winner << " wins" << endl;
  else cout << "Tie" << endl;

  return 0;
}

/*
Player 1
49 1 Key - Rock
50 2 Key - Paper
51 3 Key - Scissors
Player 2
44 comma Key - Rock
46 period Key - Paper
47 slash Key - Scissors
*/
