#include <iostream>
#include <string>

using std::string;

struct Student {
  Student() = delete;

  Student(const string& name,
          const int& id,
          const float& grade) :
          name(name),
          id(id),
          grade(grade) {}

  bool operator==(const Student& student);

  bool operator>(const Student& student);

  bool operator<(const Student& student);

string name;
int id;
float grade;

};

std::ostream &operator<<(std::ostream &os, const Student& student);