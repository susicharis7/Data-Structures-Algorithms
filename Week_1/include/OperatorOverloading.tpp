#include "OperatorOverloading.h"

template <typename T>
StudentOverload<T>::StudentOverload(const std::string& name, T gpa) {
    this->name = name;
    this->gpa = gpa;
}

// Operator +
template <typename T>
StudentOverload<T> StudentOverload<T>::operator+(const StudentOverload& other) const {
    return StudentOverload(this->name + " & " + other.name, this->gpa + other.gpa);
}

// Operator ==
template <typename T>
bool StudentOverload<T>::operator==(const StudentOverload& other) const {
    return this->name == other.name && this->gpa == other.gpa;
}

template <typename T>
void StudentOverload<T>::print() const {
    std::cout << "Name: " << name << ", GPA: " << gpa << std::endl;
}
