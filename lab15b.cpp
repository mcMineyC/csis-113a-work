#include <iostream>
#include <string>
using namespace std;

struct Node {
  string SongTitle;
  string SongAlbum;
  Node *Next;
};

class LinkList {
private:
  Node *Head;

public:
  LinkList();
  void add_item(string title, string album);
  void list_items();
};

int main() {
  LinkList songs;
  songs.add_item("Moog City", "Minecraft - Volume Alpha");
  songs.add_item("Haggstrom", "Minecraft - Volume Alpha");
  songs.add_item("Sweden", "Minecraft - Volume Alpha");
  songs.add_item("Mice on Venus", "Minecraft - Volume Alpha");
  songs.add_item("Aria Math", "Minecraft - Volume Beta");
  songs.list_items();

  return 0;
}

LinkList::LinkList() {

  // Head = NULL;
  this->Head = NULL;
}

void LinkList::add_item(string title, string album) {
  if (Head == NULL) {
    Head = new Node;
    Head->SongTitle = title;
    Head->SongAlbum = album;
    Head->Next = NULL;
  } else {
    Node *p = Head;

    while (p->Next != NULL)
      p = p->Next;

    // create the new node
    Node *n = new Node;
    n->SongTitle = title;
    n->SongAlbum = album;
    n->Next = NULL;

    // Assign the next pointer to the new node
    p->Next = n;
  }
}

void LinkList::list_items() {
  Node *p = Head;
  while (p != NULL) {
    cout << (p->SongAlbum) << ": " << (p->SongTitle) << endl;
    p = p->Next;
  }
}
