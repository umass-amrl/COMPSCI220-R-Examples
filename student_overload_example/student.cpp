#include "student.h"
using std::string;

Student::Student(const string& name,
                 const int& id,
                 const float& grade) :
  name(name),
  id(id),
  grade(grade) {}

bool Student::operator==(const Student& student) {
return id == student.id;
}

bool Student::operator>(const Student& student) {
return grade > student.grade;
}

bool Student::operator<(const Student& student) {
return grade < student.grade;
}

std::ostream &operator<<(std::ostream &os, const Student& student) {
    return os << "Name: " << student.name << " \tID#: " << student.id << "\tGPA: " << student.grade << std::endl;
}
