#include <iostream>
using namespace std;

class Rectangle {
private:
  int length;
  int width;

public:
  Rectangle();
  Rectangle(int l, int w);
  int calcArea();
  void showRectangle();
  void printRectangle();
  void printRectangle(char c);
  int getLength();
  int getWidth();
};

Rectangle::Rectangle() : length(24), width(42) {}
Rectangle::Rectangle(int l, int w) : length(l), width(w) {}
int Rectangle::getLength() { return length; }
int Rectangle::getWidth() { return width; }
int Rectangle::calcArea() { return length * width; }
void Rectangle::showRectangle() {
  cout << "Rectangle:" << endl;
  cout << "\tLegnth: " << length << endl;
  cout << "\tWidth: " << width << endl;
}
void Rectangle::printRectangle() { printRectangle('#'); }
void Rectangle::printRectangle(char c) {
  for (int x = 0; x < length; x++) {
    for (int y = 0; y < width; y++)
      cout << c;
    cout << endl;
  }
}

class Box {
private:
  int length;
  int width;
  int height;

public:
  Box();
  Box(int l, int w, int h);
  Box(Rectangle *r);
  Box(Rectangle *r, int numRects);
  int calcVolume();
  void showBox();
};
Box::Box() : length(24), width(42), height(12) {}
Box::Box(int l, int w, int h) : length(l), width(w), height(h) {}
Box::Box(Rectangle *r) {
  length = r->getLength();
  width = r->getWidth();
  height = 1;
}
Box::Box(Rectangle *r, int numRects) {
  length = r->getLength();
  width = r->getWidth();
  height = numRects;
}
int Box::calcVolume() { return length * width * height; }
void Box::showBox() {
  cout << "Box:" << endl;
  cout << "\tLength: " << length << endl;
  cout << "\tWidth: " << width << endl;
}

int main() {
  Rectangle rect;                   // Let's pretend this is 1 unit thick
  Rectangle myCustomRect(100, 100); // Too big for our box :(
  Box boringBox(10, 10, 10);

  rect.showRectangle();
  cout << "\tArea of rect: " << rect.calcArea() << endl;
  cout << "Ok, now let's print the rectangle for funsies!" << endl;
  rect.printRectangle();

  cout << "Wow!  That's cool.  Now what about a box?" << endl;
  boringBox.showBox();

  cout << "Can we hold a rectangle in it?  Not in that one, let's make a new "
          "one!"
       << endl;
  Box boxForRect(&rect); // Therefore this can hold 1 rect
  boxForRect.showBox();

  cout << "Awesome.  I want to hold 10 rectangles though." << endl;
  Box customRectBox(&rect, 10); // Now this can hold 10 rects!!!

  cout << "\tThe total volume occupied by 10 default rects is "
       << customRectBox.calcVolume() << endl;
  cout << "Sadly, there's only 1 rect in there right now :(" << endl;
  return 0;
}
