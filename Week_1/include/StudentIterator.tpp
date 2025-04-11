#include "StudentIterator.h"

template <typename T>
StudentIterator<T>::StudentIterator(const std::string& name, T gpa) {
    this->name = name;
    this->gpa = gpa;
}

template <typename T>
bool StudentIterator<T>::operator>(const StudentIterator& other) const {
    return this->gpa > other.gpa;
}

template <typename T>
void StudentIterator<T>::display() const {
    std::cout << "Name: " << name << ", GPA: " << gpa << std::endl;
}
