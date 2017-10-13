#include "student.h"

using std::cout;
using std::endl;

int main(int argc, char * argv[]) {
  Student student_one("One", 1, 1.0);
  Student student_1("1", 1, 1.0);
  Student student_four("Four", 4, 4.0);
  // Print student_one
  if (student_one == student_1) {
    cout << "EQUAL" << endl;
    cout << student_one << endl;
  } else {
    cout << "Not Equal" << endl;
    cout << student_1 << endl;
  }
  // Print student_four
  if (student_one == student_four) {
    cout << student_one << endl;
  } else {
    cout << student_four << endl;
  }

  if (student_four < student_1) {
    cout << "Student four has higher gpa." << endl;
  } else {
    cout << "Student one has higher gpa." << endl;
  }
}