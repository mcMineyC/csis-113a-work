#include <iostream>
using namespace std;
struct song {
  string title;
  string album;
  string artist;
  int duration;
};
struct playlist{
  string name;
  int length;
  song *songs;
};
void displayAll(playlist p);
void showSongInfo(song s);
void showSongInfo(song s, int level);
void indentToLevel(int level);
int main() {
  song songs[5] = {
    {"Octane", "Octane", "Creo", 0},
    {"Ballistic Funk", "Octane", "Creo", 0},
    {"Walking on The Moon (Bad Computer Remix)", "Walking on The Moon", "Infected Mushroom", 0},
    {"Hyrule Castle (Courage)", "Hyrule Castle (Courage)", "Game Chops", 0},
    {"LUDICROUS+", "LUDICROUS+", "Camellia", 0}
  };
  playlist p = {
    "javax.swing.electro",
    5,
    songs
  };
  displayAll(p);
  return 0;
}
void displayAll(playlist p){
  cout << "Playlist: " << p.name << endl;
  cout << "Length: " << p.length << endl;
  for(int i = 0; i < p.length; i++){
    showSongInfo(p.songs[i], 1);
  }
}
void showSongInfo(song s){
  cout << s.title << endl;
  cout << "\tAlbum: " << s.album << endl;
  cout << "\tArtist: " << s.artist << endl;
  cout << "\tDuration: " << s.duration << endl;
}

void showSongInfo(song s, int level){
  indentToLevel(level);
  cout << s.title << endl;
  indentToLevel(level);
  cout << "\tAlbum: " << s.album << endl;
  indentToLevel(level);
  cout << "\tArtist: " << s.artist << endl;
  indentToLevel(level);
  cout << "\tDuration: " << s.duration << endl;
}

void indentToLevel(int level){
  for(int i = 0; i < level; i++){
    cout << "\t";
  }
}
