#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

unsigned int CharToNum(char x) {
  return (x - '0');
}

char NumToChar(int x) {
  if (x < 10) {
    return ('0' + x);
  } else {
    return ('A' + (x - 10));
  }
}

void AddDigitsWithCarry(char a, char b, char* sum, char* carry) {
  const unsigned int a_num = CharToNum(a);
  const unsigned int b_num = CharToNum(b);
  const unsigned int carry_in = CharToNum(*carry);
  const unsigned int sum_num = a_num + b_num + carry_in;
  if (sum_num >= 10) {
    const int carry_num = sum_num / 10;
    *sum = NumToChar(sum_num % 10);
    *carry = NumToChar(carry_num);
  } else {
    *sum = NumToChar(sum_num);
    *carry = NumToChar(0);
  }
  cout << a << " " << b << " " << carry_in << " : " << (*carry) << " " << (*sum) << endl;
}

void Add(const string& a, const string& b, string* c_ptr) {
  string& c = * c_ptr;
  c = "";
  char carry = NumToChar(0);
  for (int i = a.size() - 1, j = b.size() - 1;
       i >= 0 || j >= 0;
       --i, --j) {
    char a_digit = NumToChar(0);
    char b_digit = NumToChar(0);
    if (i >= 0) {
      a_digit = a[i];
    }
    if (j >= 0) {
      b_digit = b[j];
    }
    char c_digit = NumToChar(0);
    AddDigitsWithCarry(a_digit, b_digit, &c_digit, &carry);
    c.insert(c.begin(), c_digit);
  }
  if (carry != NumToChar(0)) {
    c.insert(c.begin(), carry);
  }
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    cout << "ERROR: need exactly two arguments!" << endl;
    return 1;
  }
  const string a(argv[1]);
  const string b(argv[2]);
  string c("0");
  Add(a, b, &c);
  cout << a << " + " << b << " = " << c << endl;
  return 0;
}
