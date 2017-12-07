#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void Fill(vector<int>* v, int N) {
  if (v->size() < N) {
    v->push_back(v->size());
    Fill(v, N);
  }
}

int main() {
  vector<int> list;
  Fill(&list, 10);

  for (int x : list) {
    cout << x << endl;
  }
  return 0;
}

