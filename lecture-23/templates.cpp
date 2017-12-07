#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

template <typename T>
T Add(T a, T b) {
  return (a + b);
}

int main() {
  int a = 1;
  int b = 2;
  cout << Add(a, b) << endl;

  string x = "Hello ";
  string y = "World";
  cout << Add(x, y) << endl;
  return 0;
}