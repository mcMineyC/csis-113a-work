#pragma once
template <class T> // No semicolon
class Stack {
private:
  T datastore[100]; // T is the type
  int top;          // Index of top
public:
  Stack() { top = -1; }
  void push(T val) {
    ++top;
    datastore[top] = val;
  }
  T pop() {
    T val = datastore[top];
    --top;
    return val;
  }
  T peek() { return datastore[top]; }
};
