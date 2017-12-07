#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

struct TypeBase {
  virtual string Get() = 0;
};

struct IntType : TypeBase {
  int value;
  IntType(int x) : value(x) {}
  string Get() override {
    return std::to_string(value);
  }
};


struct StrType : TypeBase {
  string value;
  StrType(string x) : value(x) {}
  string Get() override {
    return value;
  }
};

int main() {
  IntType a(9);
  StrType b("Hello World");

  TypeBase* c[] = {
    &a,
    &b
  };

  for (TypeBase* x : c) {
    cout << x->Get() << endl;
  }
  return 0;
}