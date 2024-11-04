#include <iostream>
#include <string>
using namespace std;

// playlist length
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

  int maxIndex = 1;
  int maxLength =
      length[0]; // Saving memory because storing a string has a variable number
                 // of bytes whereas an int has 4 bytes.
  int minIndex = 1;
  int minLength = length[0];
  int averageLength = 0;
  cout << endl;
  // output
  for (int x = 0; x < 5; x++) {
    cout << playlists[x] << endl;
    cout << "\t" << length[x] << endl;
  }
  for (int x = 0; x < 5; x++) {
    if (length[x] > maxLength) {
      maxLength = length[x];
      maxIndex = x;
    }
  }
  for (int x = 0; x < 5; x++) {
    if (length[x] < minLength) {
      minLength = length[x];
      minIndex = x;
    }
  }
  for (int x = 0; x < 5; x++) {
    averageLength += length[x];
  }
  averageLength /= 5;
  cout << endl;
  cout << "Longest playlist is " << playlists[maxIndex] << " with "
       << length[maxIndex] << " songs" << "\n";
  cout << "Shortest playlist is " << playlists[minIndex] << " with "
       << length[minIndex] << " songs" << "\n";
  cout << "Average length is " << averageLength << " songs" << endl;
  return 0;
}
