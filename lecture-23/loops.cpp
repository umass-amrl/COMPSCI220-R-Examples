#include <iostream>

using std::cout;
using std::endl;

int main() {
  int a[] = {1, 2, 4, 8};

  for (int i = 0; i < 4; ++i) {
    cout << "i: " << i << endl;
  }

  cout << endl;

  int j = 0;
  do {
    cout << "j: " << j << endl;
    ++j;
  } while(j < 4);

  cout << endl;

  while(j > 0) {
    cout << "j: " << j << endl;
    --j;
  }

  cout << endl;

  for (auto x : a) {
    cout << "x: " << x << endl;
  }
  return 0;
}
