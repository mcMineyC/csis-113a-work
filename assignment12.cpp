#include <iostream>
#include <string>
using namespace std;
struct song {
  string name;
  string artist;
  int rating;
};

void addSong(song arr[], int &currentIndex);
void showSongInfo(song s);
void showSongInfo(song s, int level);
void indentToLevel(int level);
void displayAll(song arr[], int length);
char getMenuChoice(int &currentIndex);

int maxSize = 2;

int main() {
  int currentIndex = 0;
  song songs[maxSize];
  char choice;
  do {
    choice = getMenuChoice(currentIndex);
    if (currentIndex == 0) {
      if (choice == 'A')
        addSong(songs, currentIndex);
      if (choice == 'Q')
        break;
    } else if (currentIndex == maxSize) {
      switch (choice) {
      case 'A':
        int index;
        if (currentIndex == 1) {
          cout << "Song info:" << endl;
          showSongInfo(songs[0]);
        } else {
          do {
            cout << "Index to display (in range 0-" << currentIndex - 1
                 << "): ";
            cin >> index;
            cin.ignore(255, '\n');
          } while (index < 0 || index > currentIndex - 1);
          cout << "Song info:" << endl;
          showSongInfo(songs[index]);
        }
        break;
      case 'B':
        displayAll(songs, currentIndex);
        break;
      }
    } else {
      switch (choice) {
      case 'A':
        addSong(songs, currentIndex);
        break;
      case 'B':
        int index;
        if (currentIndex == 1) {
          cout << "Song info:" << endl;
          showSongInfo(songs[0]);
        } else {
          do {
            cout << "Index to display (in range 0-" << currentIndex - 1
                 << "): ";
            cin >> index;
            cin.ignore(255, '\n');
          } while (index < 0 || index > currentIndex - 1);
          cout << "Song info:" << endl;
          showSongInfo(songs[index]);
        }
        break;
      case 'C':
        displayAll(songs, currentIndex);
        break;
      }
    }
  } while (choice != 'Q');
  cout << "Goodbye" << endl;

  return 0;
}

void addSong(song arr[], int &currentIndex) {
  song newSong;
  cin.ignore(255, '\n');
  cout << "Name: ";
  getline(cin, newSong.name);
  cout << "Artist: ";
  cin >> newSong.artist;
  cout << "Rating: ";
  cin >> newSong.rating;
  cin.ignore(255, '\n');
  arr[currentIndex] = newSong;
  currentIndex++;
  if (currentIndex == maxSize) {
    cout << "=======================" << endl;
    cout << "     Database full     " << endl;
    cout << "=======================" << endl;
  }
}

void showSongInfo(song s) {
  cout << s.name << endl;
  cout << "\tArtist: " << s.artist << endl;
  cout << "\tRating: " << s.rating << endl;
}

void showSongInfo(song s, int level) {
  indentToLevel(level);
  cout << s.name << endl;
  indentToLevel(level);
  cout << "\tArtist: " << s.artist << endl;
  indentToLevel(level);
  cout << "\tRating: " << s.rating << endl;
}

void indentToLevel(int level) {
  for (int x = 0; x < level; x++)
    cout << "\t";
}

void displayAll(song arr[], int length) {
  cout << "All songs:" << endl;
  for (int x = 0; x < length; x++)
    showSongInfo(arr[x], 1);
}

char getMenuChoice(int &currentIndex) {
  cout << "Main menu" << endl;
  string choices[4];
  int numChoices = 0;
  if (currentIndex == 0) {
    choices[0] = "Add a new song";
    numChoices = 1;
  } else if (currentIndex == maxSize) {
    choices[0] = "Show song info";
    choices[1] = "Show all songs";
    numChoices = 2;
  } else {
    choices[0] = "Add a new song";
    choices[1] = "Show song info";
    choices[2] = "Show all songs";
    numChoices = 3;
  }
  for (int x = 0; x < numChoices; x++) {
    cout << (char)('A' + x) << " - " << choices[x] << endl;
  }
  cout << "Q - Exit" << endl;
  cout << "Enter your choice: ";
  char choice;
  cin >> choice;
  choice = toupper(choice);
  while ((choice < 'A' || choice > 'C') && choice != 'Q') {
    cout << "Invalid choice." << endl;
    cout << "Try again: ";
    cin >> choice;
    choice = toupper(choice);
  }
  return choice;
}
