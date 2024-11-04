#include <iostream>
using namespace std;
//Box wasn't defined yet for the second function
struct box {
  int length;
  int width;
  int height;
};

int calcVolume(int length, int width, int height);
int calcVolume(box boxStruct);

int main() {
  box box1 = {10, 10, 30};
  box table = {100, 100, 50};
  cout << "Volume of box1: " << calcVolume(box1.length, box1.width, box1.height) << endl;
  cout << "Volume of table: " << calcVolume(table.length, table.width, table.height) << endl;
  return 0;
}

int calcVolume(box boxStruct){
  return boxStruct.length * boxStruct.width * boxStruct.height;
}

int calcVolume(int length, int width, int height){
  return length * width * height;
}
