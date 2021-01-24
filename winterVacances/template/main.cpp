#include <iostream>
using namespace std;

class Stack {
public:
  Stack() { top = data; }
  virtual ~Stack() {}

  int data[10];
  size_t count;
  int *top;

public:
  bool empty() {
    if (top == data) {
      return true;
    } else {
      return false;
    }
  }
  void push(const int &e) {
    *top = e;
    top++;
  }
  int pop() {
    top--;
    return *top;
  }
  friend ostream &operator<<(ostream &cout, const Stack &);
};

ostream &operator<<(ostream &cout, Stack &s) {
  while (!s.empty()) {
    std::cout << s.pop() << std::endl;
  }
  return cout;
}

int main() {
  Stack s;
  for (int i = 0; i < 10; ++i) {
    s.push(i);
  }
  cout << s;
  return 0;
}
