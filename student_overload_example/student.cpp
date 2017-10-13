#include "student.h"
using std::string;

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
