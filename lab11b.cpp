#include <iostream>
#include <string>
using namespace std;

void displayAll(string playlists[], int length[], int number);
int longest(int length[], int number);
int shortest(int length[], int number);
int average(int length[], int number);

int main() {
  string playlists[5];
  int length[5];
  for (int x = 0; x < 5; x++) {
    cout << "Enter playlist name: ";
    getline(cin, playlists[x]);
    cout << "Enter length: ";
    cin >> length[x];
    cin.ignore(255, '\n');
  }

  cout << endl;
  displayAll(playlists, length, 5);
  cout << endl;
  cout << "Longest playlist has " << longest(length, 5) << " songs" << "\n";
  cout << "Shortest playlist has " << shortest(length, 5) << " songs" << "\n";
  cout << "Average playlist length is " << average(length, 5) << " songs" << "\n";
  return 0;
}

void displayAll(string playlists[], int length[], int number) {
  for (int x = 0; x < number; x++) {
    cout << playlists[x] << endl;
    cout << "\t" << length[x] << endl;
  }
}

int longest(int length[], int number) {
  int maxLength = length[0];
  for (int x = 0; x < number; x++) {
    if (length[x] > maxLength) {
      maxLength = length[x];
    }
  }
  return maxLength;
}

int shortest(int length[], int number) {
  int minLength = length[0];
  for (int x = 0; x < number; x++) {
    if (length[x] < minLength) {
      minLength = length[x];
    }
  }
  return minLength;
}

int average(int length[], int number) {
  int averageLength = 0;
  for (int x = 0; x < number; x++) {
    averageLength += length[x];
  }
  averageLength /= number;
  return averageLength;
}
