#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int Add(int a, int b) {
  return (a + b);
}

string Add(string a, string b) {
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